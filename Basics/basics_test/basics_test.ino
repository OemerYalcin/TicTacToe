char Spielfeldstatus[] = {0, 0, 0, 0, 0, 0, 0, 0, 0};



void setup() {
  Serial.begin(9600);
  while(!Serial);

}

void loop() {
  UserIn();
  delay(3000);
}

void UserIn(){
  Serial.println(Spielfeldstatus[0]);
  Serial.print("|");
  Serial.print(Spielfeldstatus[1]);
  Serial.print("|");
  Serial.println(Spielfeldstatus[2]);
  Serial.println("------------");
  Serial.print(Spielfeldstatus[3]);
  Serial.print("|");
  Serial.print(Spielfeldstatus[4]);
  Serial.print("|");
  Serial.println(Spielfeldstatus[5]);
  Serial.println("------------");
  Serial.print(Spielfeldstatus[6]);
  Serial.print("|");
  Serial.print(Spielfeldstatus[7]);
  Serial.print("|");
  Serial.print(Spielfeldstatus[9]);
}
