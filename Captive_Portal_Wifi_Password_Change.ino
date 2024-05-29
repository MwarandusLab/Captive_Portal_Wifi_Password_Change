#include <WiFiManager.h>

// Variables to hold data from custom textboxes
char testString[60] = "test value";
int testNumber = 1234;

void setup() {
  Serial.begin(9600);
  //create wifi manager object
  WiFiManager wfm;

  wfm.setDebugOutput(false);
  
   //removes any previous network settings
  wfm.resetSettings();

  if(!wfm.autoConnect("Mwaranduslab", "1234567890")){
    //did not connect, print error message
    Serial.println("Failed To Connect and hit Timeout");

    //reset and try again
    ESP.restart();
    delay(1000);
  }
  // Connected
  Serial.println("Wifi connected");
  Serial.print("IP address: ");
  Serial.println(WiFi.localIP());

// // Copy the string value
//   strncpy(testString, custom_text_box.getValue(), sizeof(testString));
//   Serial.print("testString: ");
//   Serial.println(testString);
  
  delay(100);  

}

void loop() {
 

}