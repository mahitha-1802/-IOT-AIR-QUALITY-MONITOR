#include <WiFi.h>
#include <HTTPClient.h>

// Replace with your network credentials
const char* ssid = "your_SSID";
const char* password = "your_PASSWORD";

// ThingSpeak settings
const char* server = "api.thingspeak.com";
const char* apiKey = "your_API_KEY";

// PM2.5 Sensor settings
#define PM25_SENSOR_RX 16
#define PM25_SENSOR_TX 17

// CO2 Sensor settings
#define CO2_SENSOR_RX 18
#define CO2_SENSOR_TX 19

// Function prototypes
int readPM25();
int readCO2();

void setup() {
  Serial.begin(115200);
  
  // Initialize Wi-Fi
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(1000);
    Serial.println("Connecting to WiFi...");
  }
  Serial.println("Connected to WiFi");

  // Initialize sensors
  Serial1.begin(9600, SERIAL_8N1, PM25_SENSOR_RX, PM25_SENSOR_TX);
  Serial2.begin(9600, SERIAL_8N1, CO2_SENSOR_RX, CO2_SENSOR_TX);
}

void loop() {
  int pm25_value = readPM25();
  int co2_value = readCO2();
  
  if (WiFi.status() == WL_CONNECTED) {
    HTTPClient http;
    String url = String("http://") + server + "/update?api_key=" + apiKey + "&field1=" + String(pm25_value) + "&field2=" + String(co2_value);
    
    http.begin(url);
    int httpResponseCode = http.GET();
    
    if (httpResponseCode > 0) {
      String response = http.getString();
      Serial.println(httpResponseCode);
      Serial.println(response);
    } else {
      Serial.print("Error on sending GET: ");
      Serial.println(httpResponseCode);
    }
    
    http.end();
  }
  
  delay(60000); // Delay to send data every 60 seconds
}

int readPM25() {
  int pm25_value = 0;
  // Code to read data from PM2.5 sensor
  // E.g., use SoftwareSerial library for communication
  return pm25_value;
}

int readCO2() {
  int co2_value = 0;
  // Code to read data from CO2 sensor
  // E.g., use SoftwareSerial library for communication
  return co2_value;
}
