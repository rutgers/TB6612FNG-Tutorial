//Define which pins your motor are connected to
//You should find this on your Arduino
int a_in_1 = 7;
int a_in_2 = 8;
int pwm_a = 6;

void setup() {
  // put your setup code here, to run once:

  //Set all of your output pins to output mode.
  pinMode(a_in_1, OUTPUT);
  pinMode(a_in_2, OUTPUT);
  pinMode(pwm_a, OUTPUT);

  //Write a value to the pins.
  //See the readme for configuration of these values
  digitalWrite(a_in_1, HIGH);
  digitalWrite(a_in_2, LOW);
  analogWrite(pwm_a, 0);
}

void loop() {
  // put your main code here, to run repeatedly:

  
  
  
}
