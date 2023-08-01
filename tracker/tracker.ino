#include "WiFi.h"
#include "eloquent.h"
#include "eloquent/networking/wifi/WifiScanner.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <LiquidCrystal_I2C.h>
#include "C:/Users/user/Documents/Indoor_Positioning/model.h"
int lcdColumns = 16;
int lcdRows = 2;
LiquidCrystal_I2C lcd(0x27, lcdColumns, lcdRows);

String location;
int count;
float RSSIs[DICTIONARY_SIZE];
Eloquent::ML::Port::RandomForest forest;

void setup() {
  // put your setup code here, to run once:
     // initialize LCD
    lcd.init();
    // turn on LCD backlight
    lcd.backlight();

    Serial.begin(115200);
    

    wifiScanner.identifyByMAC();
    wifiScanner.identifyBySSID();

    float RSSIs[count];
    for (int k = 0; k < count; k++) {
        RSSIs[k] = 0.0;
    }
    Serial.println("Done");
    delay(2000);
}

void loop() {
  // put your main code here, to run repeatedly:
    scan();
    classify();
    delay(2000);
}

void scan(){
  int numNetworks = WiFi.scanNetworks();

  resetFeatures();

  //assign RSSIs from scan to RSSIs vectory according to dictionary
  for(int i = 0; i < numNetworks; i++) {
    String ssid = wifiScanner.idAt(i);
    for(int j = 0; j < DICTIONARY_SIZE; j++){
      if(ssid.equals(dictionary[j])){
        RSSIs[j] = wifiScanner.rssiAt(i);
      }
    }
  }
}

void resetFeatures() {
  for(int i = 0; i < DICTIONARY_SIZE; i++){
    RSSIs[i] = 0.0;
  }
}

void printFeatures() {
  for (int i = 0; i < DICTIONARY_SIZE; i++){
    Serial.print(RSSIs[i]);
    Serial.print(i == DICTIONARY_SIZE - 1 ? '\n' : ',');
  }
}

void classify() {
  String prediction = forest.predictLabel(RSSIs);
  lcd.clear();
  Serial.print("You are in: ");
  Serial.println(prediction);
  lcd.setCursor(0,0);
  lcd.print("You are in: ");
  lcd.setCursor(0,1);
  lcd.print(prediction);
}
