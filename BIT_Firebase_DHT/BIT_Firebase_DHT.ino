#include <ESP8266WiFi.h>
#include <FirebaseESP8266.h>
#include <addons/TokenHelper.h>

#include <Adafruit_Sensor.h>
#include <DHT.h>
#include <DHT_U.h>

#define DHTPIN 2     // Digital pin connected to the DHT sensor 
#define DHTTYPE    DHT11     // DHT 11
DHT_Unified dht(DHTPIN, DHTTYPE);
/* 1. Define the WiFi credentials */
#define WIFI_SSID "Redmi"
#define WIFI_PASSWORD "ZXCV@098"

//For the following credentials, see examples/Authentications/SignInAsUser/EmailPassword/EmailPassword.ino

/* 2. Define the API Key */
#define API_KEY "AIzaSyAfe8QNq3DYeJRhEpa9MtEIwcWklnJiu5M"

/* 3. Define the RTDB URL */
#define DATABASE_URL "https://sst-firebase-default-rtdb.firebaseio.com/" //<databaseName>.firebaseio.com or <databaseName>.<region>.firebasedatabase.app

/* 4. Define the user Email and password that alreadey registerd or added in your project */
#define USER_EMAIL "srinvasanm1207@gmail.com"
#define USER_PASSWORD "Password"

//Define Firebase Data object
FirebaseData fbdo;

FirebaseAuth auth;
FirebaseConfig config;

String prevUser2Data = "";
unsigned long lastReadTime = 0;                    
void setup()
{

  Serial.begin(115200);

  WiFi.begin(WIFI_SSID, WIFI_PASSWORD);
  Serial.print("Connecting to Wi-Fi");
  while (WiFi.status() != WL_CONNECTED)
  {
    Serial.print(".");
    delay(300);
  }
  Serial.println();
  Serial.print("Connected with IP: ");
  Serial.println(WiFi.localIP());
  Serial.println();

  /* Assign the api key (required) */
  config.api_key = API_KEY;

  /* Assign the user sign in credentials */
  auth.user.email = USER_EMAIL;
  auth.user.password = USER_PASSWORD;

  /* Assign the RTDB URL (required) */
  config.database_url = DATABASE_URL;

  /* Assign the callback function for the long running token generation task */
  config.token_status_callback = tokenStatusCallback; //see addons/TokenHelper.h

  Firebase.begin(&config, &auth);
  //Comment or pass false value when WiFi reconnection will control by your code or third party library
  Firebase.reconnectWiFi(true);

  dht.begin();
}

void loop()
{
  sensors_event_t event;
  dht.temperature().getEvent(&event);
  dht.humidity().getEvent(&event);
  
  if(millis() - lastReadTime > 5000)
  {
    Serial.printf("sending hum data :  %s\n", Firebase.setFloat(fbdo, "/sensor/hum",event.relative_humidity) ? "ok" : fbdo.errorReason().c_str());
    Serial.printf("sending temp data :  %s\n", Firebase.setFloat(fbdo, "/sensor/temp",event.temperature) ? "ok" : fbdo.errorReason().c_str());
  }
}
