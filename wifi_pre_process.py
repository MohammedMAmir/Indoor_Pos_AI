#!/usr/bin/env python3

import csv
import sys
import time
import string
import copy
import numpy


networks_dictionary = dict()
input_dim = 0

MAX_NETWORKS = 10
entries_array = []

## ---- CLASS ATTEMPT ---- ##

## ---- ACCURACY MEASUREMENT FUNCTION ---- ##
def get_accuracy(model, train=False):
    if train:
        data = mnist_train
    else:
        data = mnist_val

    correct = 0
    total = 0
    for imgs, labels in torch.utils.data.DataLoader(data, batch_size=64):
        output = model(imgs)
        #select index with maximum prediction score
        pred = output.max(1, keepdim=True)[1]
        correct += pred.eq(labels.view_as(pred)).sum().item()
        total += imgs.shape[0]
    return correct / total
  

## ---- TRAINING LOOP FUNCTION ---- ## 

def train(model, labels_array, data_array, batch_size=4, num_epochs=1 , print_stat = 1):
    
    train_loader = torch.utils.data.DataLoader(data, batch_size=batch_size)
    i1, l1 = next(iter(train_loader))
    criterion = nn.CrossEntropyLoss()
    optimizer = optim.SGD(model.parameters(), lr=0.01, momentum=0.9)
    

    iters, losses, train_acc, val_acc = [], [], [], []

    # training
    n = 0 # the number of iterations
    for epoch in range(num_epochs):
        for labels, vector in iter(train_loader):
            print(numpy.array(vector).size)
            out = model(torch.tensor(vector))             # forward pass
            loss = criterion(out, labels) # compute the total loss
            loss.backward()               # backward pass (compute parameter updates)
            optimizer.step()              # make the updates for each parameter
            optimizer.zero_grad()         # a clean up step for PyTorch

            # save the current training information
            iters.append(n)
            losses.append(float(loss)/batch_size)             # compute *average* loss
            train_acc.append(get_accuracy(model, train=True)) # compute training accuracy 
            val_acc.append(get_accuracy(model, train=False))  # compute validation accuracy
            n += 1

    if print_stat:
      # plotting
      plt.title("Training Curve")
      plt.plot(iters, losses, label="Train")
      plt.xlabel("Iterations")
      plt.ylabel("Loss")
      plt.show()

      plt.title("Training Curve")
      plt.plot(iters, train_acc, label="Train")
      plt.plot(iters, val_acc, label="Validation")
      plt.xlabel("Iterations")
      plt.ylabel("Training Accuracy")
      plt.legend(loc='best')
      plt.show()

      print("Final Training Accuracy: {}".format(train_acc[-1]))
      print("Final Validation Accuracy: {}".format(val_acc[-1]))
    

## ---- MAIN CODE ---- ##

with open (sys.argv[1], "r") as file:
    #take data.txt file and read each line from it
    data = file.readlines()
    #for each line in the data.txt file
    for line in data:
        #split between the location label and the collected network strengths
        location_vs_network = line.split("{")
        #remove the final brace bracket
        location_vs_network[1] = location_vs_network[1].replace("}\n", "")
        #split into a list of each network and its respective strength
        location_vs_network[1] = location_vs_network[1].split(",")
        #for each network and its respective strength, split the name and the strength and store each
        #new name found in a dict object
        for entry in location_vs_network[1]:
            name_data = entry.split(":")
            if name_data[0] not in networks_dictionary.keys():
                networks_dictionary[name_data[0]] = 0
       
    #now we have a list of all known and detected networks in the area

    #initialize the strengths of all networks in the dict object to 0
    for key in networks_dictionary:
        networks_dictionary[key] = 0

    #loop through the entire data.txt file again and record the data in a specific
    #dict object format in the array called entries_array
    for line in data:
        initial_split = line.split("{")
        initial_split[1] = initial_split[1].replace("}\n", "")
        initial_split[0] = initial_split[0].replace(": ", "")
        initial_split[1] = initial_split[1].split(",")
        new_dict = copy.deepcopy(networks_dictionary)
        for entry in initial_split[1]:
            name_strength = entry.split(":")
            new_dict[name_strength[0]] = int(name_strength[1])
        entries_array.append([initial_split[0], copy.deepcopy(new_dict)])
    
    #convert the entries_array to an out_put array that is just a location
    #and a vector of signal strengths
    output_array = []
    for entry in entries_array:
        count = 0
        temp_array = []
        #entry[1] is specific dict object of network keys and strength values
        for key in entry[1]:
            #each vector index correspends to a specific detected network
            temp_array.append(entry[1][key])
            #also count the amount of networks detected
            count += 1
        output_array.append([entry[0], temp_array])
        input_dim = count
    

    print(input_dim)
    print(output_array)
    new_array = []
    labels = []
    data_array = []
    for i in output_array:
        labels.append(i[0])
        data_array.append(i[1])
        new_array.append(i[1].insert(0, i[0]))

    print(labels)
    numpy_data = numpy.array(data_array)
    print(numpy_data)

    with open('data.csv', 'w', encoding='UTF8') as data_file:
        writer = csv.writer(data_file)
        for i in numpy_data:
            writer.writerow(i)
## ---- MODEL CREATION AND TRAINING ---- ##
    import torch
    import torch.nn as nn
    import torch.nn.functional as F

    import matplotlib.pyplot as plt # for plotting
    import torch.optim as optim #for gradient descent

    torch.manual_seed(1) # set the random seed

    #main model architecture 
    class LocationClassifier(nn.Module):
        def __init__(self):
            super(LocationClassifier, self).__init__()
            self.layer1 = nn.Linear(input_dim, 50)
            self.layer2 = nn.Linear(50, 20)
            self.layer3 = nn.Linear(20, 3)
        def forward(self, vector):
            activation1 = F.relu(self.layer1(vector))
            activation2 = F.relu(self.layer2(activation1))
            output = self.layer3(activation2)
            return output

    model = LocationClassifier()

    print('done')  
    train(model, label_array, data_array, num_epochs=500, print_stat=0)


    
        
