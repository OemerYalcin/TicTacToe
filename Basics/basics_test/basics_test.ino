int Spielfeldstatus[] = {1, 1, 1, 1, 2, 3, 9, 8, 6};



void setup() {
  Serial.begin(9600);
  while(!Serial);

}

void loop() {
  UserIn();
  delay(3000);
}

void UserIn(){
  
   int var = 0;
    bool Display[8];

  while(var < 8) {
    if (Spielfeldstatus[var] == 0){
      
      Display[var] == false;
      }else{
        Display[var] == true;
      }
    var++;
  }

  Serial.println();
  Serial.print(Display[0]);
  Serial.print(" | ");
  Serial.print(Display[1]);
  Serial.print(" | ");
  Serial.println(Display[2]);
  Serial.println("------------");
  Serial.print(Display[3]);
  Serial.print(" | ");
  Serial.print(Display[4]);
  Serial.print(" | ");
  Serial.println(Display[5]);
  Serial.println("------------");
  Serial.print(Display[6]);
  Serial.print(" | ");
  Serial.print(Display[7]);
  Serial.print(" | ");
  Serial.print(Display[8]);

  }
