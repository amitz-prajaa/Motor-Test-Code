int m1a = 6;
int m1b = 7;

int m2a = 8;
int m2b = 9;
int speed1 = 255 ;
void setup() {
  // put your setup code here, to run once:
pinMode(m1a, OUTPUT);
  pinMode(m1b, OUTPUT);
  pinMode(m2a, OUTPUT);
  pinMode(m2b, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
    analogWrite(m1a, speed1);    // motor 1 forward
    digitalWrite(m1b, LOW);
    analogWrite(m2a, speed1);    // motor 2 forward
    digitalWrite(m2b, LOW);
}
