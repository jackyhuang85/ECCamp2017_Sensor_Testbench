#include <SoftwareSerial.h>
//#include <Serial.h>
SoftwareSerial mySerial(10, 11);  //RX | TX
void WaitForResponse(){
  delay(500);
  if (mySerial.available()){
    while (mySerial.available()){
      Serial.write(mySerial.read());  
    }
  }
}
void setAT(){
      Serial.println("Setting UART:");
      mySerial.write("AT+UART=38400,0,0\r\n");
      WaitForResponse();
      Serial.println("Setting CMODE:");
      mySerial.write("AT+CMODE=0\r\n");
      WaitForResponse();
      Serial.println("Setting ROLE:");
      mySerial.write("AT+ROLE=1\r\n");
      WaitForResponse();
      Serial.println("Setting PSWD:");
      mySerial.write("AT+PSWD=1234\r\n");
      WaitForResponse();
      Serial.println("Please enter \"AT+BIND=<slave's address>\" to generate the binding bundle.");
}
void setup(){
  digitalWrite(9, HIGH);
  Serial.begin(9600);
  Serial.println("Enter AT Command:");
  mySerial.begin(38400);
  delay(1000);
  setAT();
}

void loop(){
  static int steps = 0;
  if (mySerial.available()){
    while (mySerial.available()){
      Serial.write(mySerial.read());  
    }
  }
  if (Serial.available()){
    mySerial.write(Serial.read());
  }
}
