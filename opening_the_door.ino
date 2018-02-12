//Below piece of code is used to take Finger Print as input and take action according to validation of finger. If finger will be validated gate will be open otherwise remain closed.//

for(int i=0;i<5;i++)
  {
    lcd.clear();
    lcd.print("Place Finger");
    delay(2000);
    int result=getFingerprintIDez();
    if(result>=0)
    {
        digitalWrite(openLight, HIGH);
        digitalWrite(closeLight, LOW);
        lcd.clear();
        lcd.print("Allowed");
        lcd.setCursor(0,1);
        lcd.print("Gete Opened   ");
        myServo.write(0);
        delay(5000);
        myServo.write(180);
        digitalWrite(closeLight, HIGH);
        digitalWrite(openLight, LOW);
        lcd.setCursor(0,1);
        lcd.print("Gate Closed   ");
