int LED = 2;

void setup() {
 pinMode(LED, OUTPUT); // Port aus Ausgang schalten
 }

void loop() {
   digitalWrite(LED,LOW); //aus
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
  digitalWrite(LED, HIGH); //Led einschlaten
  delay(1000);
  digitalWrite(LED,LOW); //aus
  delay(1000); 
  digitalWrite(LED, HIGH); //an
  delay(1000);
  digitalWrite(LED,LOW); //aus
  delay(1000); 
  digitalWrite(LED, HIGH); //an
  delay(1000);
  digitalWrite(LED,LOW); //aus
  delay(1000); 
  digitalWrite(LED, HIGH); //an
  delay(1000);
  digitalWrite(LED,LOW); //aus
  delay(1000); 
  digitalWrite(LED, HIGH); //an
  delay(1000);
  digitalWrite(LED,LOW);
}
void letter_e() {
  digitalWrite(LED, HIGH);
  delay(1000);
   digitalWrite(LED,LOW); //Led einschlaten
}
void letter_l() {
  digitalWrite(LED, HIGH); //Led einschlaten
  delay(1000);
  digitalWrite(LED,LOW); //aus
  delay(1000); 
  digitalWrite(LED, HIGH); //an
  delay(3000);
  digitalWrite(LED,LOW); //aus
  delay(1000);
  digitalWrite(LED, HIGH); //Led einschlaten
  delay(1000);
  digitalWrite(LED,LOW); //aus
  delay(1000); 
  digitalWrite(LED, HIGH);
  delay(1000);
   digitalWrite(LED,LOW); //Led einschlaten
}
void letter_o() {
  digitalWrite(LED, HIGH); //Led einschlaten
  delay(3000);
  digitalWrite(LED,LOW); //aus
  delay(1000); 
  digitalWrite(LED, HIGH); //an
  delay(3000);
  digitalWrite(LED,LOW); //aus
  delay(1000);
  digitalWrite(LED, HIGH);
  delay(3000);
   digitalWrite(LED, LOW);
}
void letter_w() {
  digitalWrite(LED, HIGH);
  delay(3000);
  digitalWrite(LED, LOW);
  delay(1000);
  digitalWrite(LED, HIGH); //Led einschlaten
  delay(1000);
  digitalWrite(LED,LOW); //aus
  delay(1000); 
  digitalWrite(LED, HIGH);
  delay(1000);
   digitalWrite(LED, LOW);
}
void letter_r() {
  digitalWrite(LED, HIGH);
  delay(3000);
  digitalWrite(LED, LOW);
  delay(1000);
  digitalWrite(LED, HIGH); //Led einschlaten
  delay(1000);
  digitalWrite(LED, LOW);
  delay(1000);
  digitalWrite(LED, HIGH);
  delay(3000);
   digitalWrite(LED, LOW);
}
void letter_d() {
  digitalWrite(LED, HIGH);
  delay(3000);
  digitalWrite(LED, LOW);
  delay(1000);
  digitalWrite(LED, HIGH); //Led einschlaten
  delay(1000);
  digitalWrite(LED, LOW);
  delay(1000);
  digitalWrite(LED, HIGH);
  delay(1000);
   digitalWrite(LED,LOW); //Led einschlaten
}