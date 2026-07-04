// Gas Leakage Detection System
// Arduino UNO + MQ-2 Gas Sensor

const int gasSensor = 2;
const int led = 8;
const int buzzer = 9;

void setup() {
  pinMode(gasSensor, INPUT);
  pinMode(led, OUTPUT);
  pinMode(buzzer, OUTPUT);

  digitalWrite(led, LOW);
  digitalWrite(buzzer, LOW);

  Serial.begin(9600);

  Serial.println("Gas Leakage Detection System");
  Serial.println("Sensor warming up...");
  delay(20000);   // 20-second warm-up
  Serial.println("System Ready");
}

void loop() {

  int gas = digitalRead(gasSensor);

  if (gas == HIGH) {

    digitalWrite(led, HIGH);
    digitalWrite(buzzer, HIGH);

    Serial.println("GAS DETECTED!");

  } else {

    digitalWrite(led, LOW);
    digitalWrite(buzzer, LOW);

    Serial.println("SAFE");

  }

  delay(300);
}