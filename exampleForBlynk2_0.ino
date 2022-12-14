//  This code was tested with ESP32 and did not have a problems
//  Form Blynk 2.0
#define BLYNK_TEMPLATE_ID "---"
#define BLYNK_DEVICE_NAME "---"
#define BLYNK_AUTH_TOKEN  "---"

#define BLYNK_FIRMWARE_VERSION "0.1.0"

#define BLYNK_PRINT Serial
#define APP_DEBUG

#include <WiFi.h>
#include <WiFiClient.h>
#include <BlynkSimpleEsp32.h> //Do not forget this library

char auth[] = BLYNK_AUTH_TOKEN;

//  Line Notify
#include <TridentTD_LineNotify.h> //Do not forget this library
#define SSID        "---"      // Wifi's name
#define PASSWORD    "---"     // Wifi's password
#define LINE_TOKEN  "---"   // TOKEN


void setup() {
  Serial.begin(115200);

  Blynk.begin( auth, SSID, PASSWORD);

  Serial.println(LINE.getVersion());
  LINE.setToken(LINE_TOKEN);
  LINE.notify("Hello from ESP32");
}

void loop() {
  Blynk.run();
}
