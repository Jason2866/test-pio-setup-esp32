#include <Arduino.h>
#include <AsyncTCP.h>
#include <WiFi.h>

#include <ESPAsyncWebServer.h>

//WiFiClass WiFi; // Use WiFi object

// Dummy handler to potentially use event types
void WiFiEventHandler(arduino_event_id_t event) {
Serial.printf("[WiFi-event] event: %d\n", event);
}

void setup() {
Serial.begin(115200);
Serial.println("Minimal ESP32-C6 Network Event Type Test");
// WiFi.mode(WIFI_STA);
}

void loop() {
delay(1000);
}
