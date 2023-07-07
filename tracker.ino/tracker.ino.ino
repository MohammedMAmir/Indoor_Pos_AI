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
float* RSSIs;

void setup() {
  RandomForest forest;
  // put your setup code here, to run once:
     // initialize LCD
    lcd.init();
    // turn on LCD backlight
    lcd.backlight();
    lcd.setCursor(0, 0);

    Serial.begin(115200);
    delay(2000);

    wifiScanner.identifyByMAC();
    wifiScanner.identifyBySSID();

    float RSSIs[count];
    for (int k = 0; k < count; k++) {
        RSSIs[k] = 0.0;
    }
}

void loop() {
  // put your main code here, to run repeatedly:
  if (Serial.available()) {
        location = Serial.readStringUntil('\n');
    }
    wifiScanner.scan();
    int numNetworks = WiFi.scanNetworks();

    for (int i = 0; i < numNetworks; i++) {
        for (int j = 0; j < count; j++) {
            if (wifiScanner.idAt(i) == dictionary[j]) {
                RSSIs[j] = wifiScanner.rssiAt(i);
            }
        }
    }

    for(int i = 0; i < count; i++) {
      Serial.println(dictionary[i]);
      Serial.print(": ");
      Serial.println(RSSIs[i], 1);
      Serial.println("\n");
    }

    delay(8000);
}

void scrollText(int row, String message, int delayTime, int lcdColumns) {
    for (int i=0; i < lcdColumns; i++) {
        message = " " + message;
    }
    message = message + " ";
    for (int pos = 0; pos < message.length(); pos++) {
        lcd.setCursor(0, row);
        lcd.print(message.substring(pos, pos + lcdColumns));
        delay(delayTime);
    }
}
