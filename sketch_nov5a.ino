#include <ESP8266WiFi.h>
#include <WiFiClient.h>
#include <ESP8266WiFiMulti.h> 
#include <ESP8266mDNS.h>
#include <ESP8266WebServer.h>
#include <FS.h>


int LED = 2; 
ESP8266WiFiMulti wifiMulti;
ESP8266WebServer server(80); 

void handleRoot();              // function prototypes for HTTP handlers
void handleNotFound();


void setup(void) { 
  Serial.begin(115200); 
  Serial.println("ESP Getestet"); 
  pinMode(LED, OUTPUT); // Port aus Ausgang schalten 
  Wifi_connecting(); 
  } 
  
  void loop(void) {
  server.handleClient();
 // Hello_World();
   } 

   void Wifi_connecting() { 
    WiFi.begin("BARAMUN-4U4JT6A 1799", "/53Pu647");
     Serial.print("Verbindung wird hergestellt...");
      while(WiFi.status() != WL_CONNECTED) 
      { delay(500); 
        Serial.print("."); 
      } 
      if (WiFi.status() == WL_CONNECTED) {
         Serial.println();
         Serial.print("Verbunden! IP-Adresse: ");
         Serial.println(WiFi.localIP()); 
        
         server.on("/", handleRoot);
         server.on("/Hello", Hello_World);
         
         server.onNotFound(handleNotFound);
         server.begin();
         Serial.print("Webserver gestartet");
         String IP = WiFi.localIP().toString();
         Serial.println();
         Serial.print("URL: http://"+ IP +"/");
           }
            }
            
void handleRoot() {
  File file = SPIFFS.open("/index.html", "r");
  server.streamFile(file, "text/html"); // Sendet Datei als HTML
  file.close();  // Send HTTP status 200 (Ok) and send some text to the browser/client
}

void handleNotFound(){
  server.send(404, "text/plain", "404: Not found"); // Send HTTP status 404 (Not Found) when there's no handler for the URI in the request
}

void Hello_World() {
  server.send(200, "text/plain", "Hello World!!!");
  digitalWrite(LED, HIGH);
  delay(10000); 
  letter_h();
  delay(3000);
  letter_e();
  delay(3000);
  letter_l();
  delay(3000);
  letter_l();
  delay(3000);
  letter_o();
  delay(7000);
  letter_w();
  delay(3000);
  letter_o();
  delay(3000);
  letter_r();
  delay(3000);
  letter_l();
  delay(3000);
  letter_d();
  delay(20000);
}

void letter_h() {
  digitalWrite(LED, LOW);
  delay(1000);
  digitalWrite(LED, HIGH);
  delay(1000); 
  digitalWrite(LED, LOW);
  delay(1000);
  digitalWrite(LED, HIGH);
  delay(1000); 
  digitalWrite(LED, LOW);
  delay(1000);
  digitalWrite(LED, HIGH);
  delay(1000); 
  digitalWrite(LED, LOW);
  delay(1000);
  digitalWrite(LED, HIGH);
  delay(1000); 
  digitalWrite(LED, LOW);
}

void letter_e() {
  digitalWrite(LED, LOW);
  delay(1000);
  digitalWrite(LED, HIGH);
}

void letter_l() {
  digitalWrite(LED, LOW);
  delay(1000);
  digitalWrite(LED, HIGH);
  delay(1000); 
  digitalWrite(LED, LOW);
  delay(3000);
  digitalWrite(LED, HIGH);
  delay(1000); 
  digitalWrite(LED, LOW);
  delay(1000);
  digitalWrite(LED, HIGH);
  delay(1000);
  digitalWrite(LED, LOW);
}

void letter_o() {
  digitalWrite(LED, LOW);
  delay(3000);
  digitalWrite(LED, HIGH);
  delay(1000); 
  digitalWrite(LED, LOW);
  delay(3000);
  digitalWrite(LED, HIGH);
  delay(1000);
  digitalWrite(LED, LOW);
}

void letter_w() {
  digitalWrite(LED, LOW);
  delay(3000);
  digitalWrite(LED, HIGH);
  delay(1000);
  digitalWrite(LED, LOW);
  delay(1000); 
  digitalWrite(LED, HIGH);
  delay(1000);
  digitalWrite(LED, LOW);
}

void letter_r() {
  digitalWrite(LED, LOW);
  delay(3000);
  digitalWrite(LED, HIGH);
  delay(1000);
  digitalWrite(LED, LOW);
  delay(1000);
  digitalWrite(LED, HIGH);
  delay(1000);
  digitalWrite(LED, LOW);
}

void letter_d() {
  digitalWrite(LED, LOW);
  delay(3000);
  digitalWrite(LED, HIGH);
  delay(1000);
  digitalWrite(LED, LOW);
  delay(1000);
  digitalWrite(LED, HIGH);
  delay(1000);
  digitalWrite(LED, LOW);
}