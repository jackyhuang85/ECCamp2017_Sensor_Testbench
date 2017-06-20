const int motorA_inputA = 9;
const int motorA_inputB = 10;
const int motorB_inputA = 7;
const int motorB_inputB = 8;
void setup() {
  // put your setup code here, to run once:
  pinMode(motorA_inputA, OUTPUT);
  pinMode(motorA_inputB, OUTPUT);
  pinMode(motorB_inputA, OUTPUT);
  pinMode(motorB_inputB, OUTPUT);
}

void switchLed(const int led, const bool states){
  // led = 0/1 : motorA/B ; 
  // states = 0/1 : outputA->outputB / opposite
  if (led){ // motorA
    if (states){
      digitalWrite(motorA_inputA, HIGH);
      digitalWrite(motorA_inputB, LOW);
    }
    else{
      digitalWrite(motorA_inputA, LOW);
      digitalWrite(motorA_inputB, HIGH);
    }
  }
  else{
    if (states){
      digitalWrite(motorB_inputA, HIGH);
      digitalWrite(motorB_inputB, LOW);
    }
    else{
      digitalWrite(motorB_inputA, LOW);
      digitalWrite(motorB_inputB, HIGH);
    }
  }
  delay(1000);
}

void loop() {

  switchLed(0, 1);
  switchLed(1, 1);
  switchLed(0, 0);
  switchLed(1, 0);
}
