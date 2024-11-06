#include <ESP8266WiFi.h> 
#include <ESP8266WebServer.h> 
int LED = 2; 
ESP8266WebServer server(80); 
void setup() { 
  Serial.begin(115200); 
  Serial.println("ESP Getestet"); 
  pinMode(LED, OUTPUT); // Port aus Ausgang schalten 
  Wifi_connecting(); 
  } 
  
  void loop() {
  Hello_World();
   } 

   void Wifi_connecting() { 
    WiFi.begin("Voucher", "");
     Serial.print("Verbindung wird hergestellt...");
      while(WiFi.status() != WL_CONNECTED) 
      { delay(500); 
        Serial.print("."); 
      } 
      if (WiFi.status() == WL_CONNECTED) {
         Serial.println();
          Serial.print("Verbunden! IP-Adresse: ");
           Serial.println(WiFi.localIP()); 
           server.begin(); }
            }
            
void Hello_World() {
  digitalWrite(LED, LOW);
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
  delay(1000); 
  digitalWrite(LED, HIGH);
}

void letter_e() {
  digitalWrite(LED, HIGH);
  delay(1000);
  digitalWrite(LED, LOW);
}

void letter_l() {
  digitalWrite(LED, HIGH);
  delay(1000);
  digitalWrite(LED, LOW);
  delay(1000); 
  digitalWrite(LED, HIGH);
  delay(3000);
  digitalWrite(LED, LOW);
  delay(1000); 
  digitalWrite(LED, HIGH);
  delay(1000);
  digitalWrite(LED, LOW);
  delay(1000);
  digitalWrite(LED, HIGH);
}

void letter_o() {
  digitalWrite(LED, HIGH);
  delay(3000);
  digitalWrite(LED, LOW);
  delay(1000); 
  digitalWrite(LED, HIGH);
  delay(3000);
  digitalWrite(LED, LOW);
  delay(1000);
  digitalWrite(LED, HIGH);
}

void letter_w() {
  digitalWrite(LED, HIGH);
  delay(3000);
  digitalWrite(LED, LOW);
  delay(1000);
  digitalWrite(LED, HIGH);
  delay(1000); 
  digitalWrite(LED, LOW);
  delay(1000);
  digitalWrite(LED, HIGH);
}

void letter_r() {
  digitalWrite(LED, HIGH);
  delay(3000);
  digitalWrite(LED, LOW);
  delay(1000);
  digitalWrite(LED, HIGH);
  delay(1000);
  digitalWrite(LED, LOW);
  delay(1000);
  digitalWrite(LED, HIGH);
}

void letter_d() {
  digitalWrite(LED, HIGH);
  delay(3000);
  digitalWrite(LED, LOW);
  delay(1000);
  digitalWrite(LED, HIGH);
  delay(1000);
  digitalWrite(LED, LOW);
  delay(1000);
  digitalWrite(LED, HIGH);
}