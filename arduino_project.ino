int randlamp;
int randtime;
int button = 2;
int counter = 0;
void setup() {
  Serial.begin(9600);
  pinMode(button, INPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  if (digitalRead(button) == HIGH) {
    counter = 1;
  }
}

void loop() {
  if (digitalRead(button) == LOW) {
  }
  else {
    counter++;
    Serial.println("Program Baslatildi veya Sonlandirildi");
    delay(3000);
  }

  switch (counter) {
    case 1:
      randlamp = random(3, 8);
      randtime = random(5000, 11000);
      digitalWrite(randlamp, HIGH);
      Serial.print(randlamp - 2);
      Serial.print(" numarali lamba ");
      Serial.print(randtime / 1000);
      Serial.println(" saniye boyunca yanacak.");
      delay(randtime);
      digitalWrite(randlamp, LOW);
      Serial.println("Lamba sondu!");
      delay(1000);
      break;
    default:
      counter = 0;
  }

}
