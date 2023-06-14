#!/usr/bin/env python3

import csv
import sys
import copy
import numpy
import torch
from sklearn.svm import SVC
from micromlgen import port
from glob import glob
from os.path import basename


torch.manual_seed(1) # set the random seed
device = torch.device('cpu')


networks_dictionary = dict()
input_dim = 0

MAX_NETWORKS = 10
entries_array = []

def load_features(folder):
    dataset = None
    classmap = {}
    for class_idx, filename in enumerate(glob('%s/*.csv' % folder)):
        class_name = basename(filename)[:-4]
        classmap[class_idx] = class_name
        samples = numpy.loadtxt(filename, dtype=float, delimiter=',')
        labels = numpy.ones((len(samples), 1)) * class_idx
        samples = numpy.hstack((samples, labels))
        dataset = samples if dataset is None else numpy.vstack((dataset, samples))

    return dataset, classmap

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

    for line in numpy_data:
        name = line[0]

        name = 'data/' + name + '.csv'
        file = open(name, 'a')
        writer = csv.writer(file)
        count = 0
        
        writer.writerow(line[1:input_dim + 2])

## ---- TRAIN SVM CLASSIFIER AND OUTPUT C CODE ---- ##
    # put your samples in the dataset folder
    # one class per file
    # one feature vector per line, in CSV format
    features, classmap = load_features('data/')
    X, y = features[:, :-1], features[:, -1]
    classifier = SVC(kernel='linear', gamma=0.001).fit(X, y)
    c_code = port(classifier, classmap=classmap)
    print(c_code)
    
        
