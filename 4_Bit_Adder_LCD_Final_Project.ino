#include <Wire.h>
#include <LiquidCrystal_I2C.h> //Header file for LCD Display


LiquidCrystal_I2C lcd(0x27,16,2); //Sets the LCD address 

const int s0 = 3;
const int s1 = 5;
const int s2 = 6;
const int s3 = 9;
const int c0 = 10;  //Declares variables of sums and carries





void setup() {
lcd.init();
lcd.backlight(); //Turns on LCD monitor upon setup
Serial.begin(9600);

}

void loop() {

if (((digitalRead(s0)==0))&&((digitalRead(s1)==0))&&((digitalRead(s2)==0))&&((digitalRead(s3)==0))&&((digitalRead(c0)==0))){ //At the start the LCD monitor would display 00000
 lcd.setCursor (0,0);
 lcd.print ("Binary: 00000");
 lcd.setCursor (0,1);
 lcd.print ("Decimal: 00");
}

//This line of code is to display the binary number based on the 4 bit adder outputs

 if ((digitalRead (s0) == 1)){
 lcd.setCursor (12,0);
 lcd.print ("1");
 }

else if ((digitalRead (s0) == 0)){

 lcd.setCursor (12,0);
 lcd.print ("0");
 }
 
 if ((digitalRead (s1) == 1)){
 lcd.setCursor (11,0);
 lcd.print ("1");
 }

else if ((digitalRead (s1) == 0)){

 lcd.setCursor (11,0);
 lcd.print ("0");
 }
 
 if ((digitalRead (s2) == 1)){
 lcd.setCursor (10,0);
 lcd.print ("1");
 }

else if ((digitalRead (s2) == 0)){

 lcd.setCursor (10,0);
 lcd.print ("0");
 }

  if ((digitalRead (s3) == 1)){
 lcd.setCursor (9,0);
 lcd.print ("1");
 }

else if ((digitalRead (s3) == 0)){

 lcd.setCursor (9,0);
 lcd.print ("0");
 }
 
 if ((digitalRead (c0) == 1)){
 lcd.setCursor (8,0);
 lcd.print ("1");
 }

else if ((digitalRead (c0) == 0)){

 lcd.setCursor (8,0);
 lcd.print ("0");
 }


 //This is the decimal conversion line of code that displays each of the possible combinations of the 4 bit adder
 if (((digitalRead(s0)==1))&&((digitalRead(s1)==0))&&((digitalRead(s2)==0))&&((digitalRead(s3)==0))&&((digitalRead(c0)==0))){
 lcd.setCursor (0,1);
 lcd.print ("Decimal: 01");
}
 
 else if (((digitalRead(s0)==0))&&((digitalRead(s1)==1))&&((digitalRead(s2)==0))&&((digitalRead(s3)==0))&&((digitalRead(c0)==0))){
 lcd.setCursor (0,1);
 lcd.print ("Decimal: 02");
}

 else if (((digitalRead(s0)==1))&&((digitalRead(s1)==1))&&((digitalRead(s2)==0))&&((digitalRead(s3)==0))&&((digitalRead(c0)==0))){
 lcd.setCursor (0,1);
 lcd.print ("Decimal: 03");
 }

  else if (((digitalRead(s0)==0))&&((digitalRead(s1)==0))&&((digitalRead(s2)==1))&&((digitalRead(s3)==0))&&((digitalRead(c0)==0))){
 lcd.setCursor (0,1);
 lcd.print ("Decimal: 04");
}

  else if (((digitalRead(s0)==1))&&((digitalRead(s1)==0))&&((digitalRead(s2)==1))&&((digitalRead(s3)==0))&&((digitalRead(c0)==0))){
 lcd.setCursor (0,1);
 lcd.print ("Decimal: 05");
}

  else if (((digitalRead(s0)==0))&&((digitalRead(s1)==1))&&((digitalRead(s2)==1))&&((digitalRead(s3)==0))&&((digitalRead(c0)==0))){
 lcd.setCursor (0,1);
 lcd.print ("Decimal: 06");
}

  else if (((digitalRead(s0)==1))&&((digitalRead(s1)==1))&&((digitalRead(s2)==1))&&((digitalRead(s3)==0))&&((digitalRead(c0)==0))){
 lcd.setCursor (0,1);
 lcd.print ("Decimal: 07");
}

  else if (((digitalRead(s0)==0))&&((digitalRead(s1)==0))&&((digitalRead(s2)==0))&&((digitalRead(s3)==1))&&((digitalRead(c0)==0))){
 lcd.setCursor (0,1);
 lcd.print ("Decimal: 08");
}

  else if (((digitalRead(s0)==1))&&((digitalRead(s1)==0))&&((digitalRead(s2)==0))&&((digitalRead(s3)==1))&&((digitalRead(c0)==0))){
 lcd.setCursor (0,1);
 lcd.print ("Decimal: 09");
}

  else if (((digitalRead(s0)==0))&&((digitalRead(s1)==1))&&((digitalRead(s2)==0))&&((digitalRead(s3)==1))&&((digitalRead(c0)==0))){
 lcd.setCursor (0,1);
 lcd.print ("Decimal: 10");
}

  else if (((digitalRead(s0)==1))&&((digitalRead(s1)==1))&&((digitalRead(s2)==0))&&((digitalRead(s3)==1))&&((digitalRead(c0)==0))){
 lcd.setCursor (0,1);
 lcd.print ("Decimal: 11");
}
  else if (((digitalRead(s0)==0))&&((digitalRead(s1)==0))&&((digitalRead(s2)==1))&&((digitalRead(s3)==1))&&((digitalRead(c0)==0))){
 lcd.setCursor (0,1);
 lcd.print ("Decimal: 12");
}

  else if (((digitalRead(s0)==1))&&((digitalRead(s1)==0))&&((digitalRead(s2)==1))&&((digitalRead(s3)==1))&&((digitalRead(c0)==0))){
 lcd.setCursor (0,1);
 lcd.print ("Decimal: 13");
}

  else if (((digitalRead(s0)==0))&&((digitalRead(s1)==1))&&((digitalRead(s2)==1))&&((digitalRead(s3)==1))&&((digitalRead(c0)==0))){
 lcd.setCursor (0,1);
 lcd.print ("Decimal: 14");
}

  else if (((digitalRead(s0)==1))&&((digitalRead(s1)==1))&&((digitalRead(s2)==1))&&((digitalRead(s3)==1))&&((digitalRead(c0)==0))){
 lcd.setCursor (0,1);
 lcd.print ("Decimal: 15");
}

  else if (((digitalRead(s0)==0))&&((digitalRead(s1)==0))&&((digitalRead(s2)==0))&&((digitalRead(s3)==0))&&((digitalRead(c0)==1))){
 lcd.setCursor (0,1);
 lcd.print ("Decimal: 16");
}

  else if (((digitalRead(s0)==1))&&((digitalRead(s1)==0))&&((digitalRead(s2)==0))&&((digitalRead(s3)==0))&&((digitalRead(c0)==1))){
 lcd.setCursor (0,1);
 lcd.print ("Decimal: 17");
}

  else if (((digitalRead(s0)==0))&&((digitalRead(s1)==1))&&((digitalRead(s2)==0))&&((digitalRead(s3)==0))&&((digitalRead(c0)==1))){
 lcd.setCursor (0,1);
 lcd.print ("Decimal: 18");
}

  else if (((digitalRead(s0)==1))&&((digitalRead(s1)==1))&&((digitalRead(s2)==0))&&((digitalRead(s3)==0))&&((digitalRead(c0)==1))){
 lcd.setCursor (0,1);
 lcd.print ("Decimal: 19");
}

  else if (((digitalRead(s0)==0))&&((digitalRead(s1)==0))&&((digitalRead(s2)==1))&&((digitalRead(s3)==0))&&((digitalRead(c0)==1))){
 lcd.setCursor (0,1);
 lcd.print ("Decimal: 20");
}

  else if (((digitalRead(s0)==1))&&((digitalRead(s1)==0))&&((digitalRead(s2)==1))&&((digitalRead(s3)==0))&&((digitalRead(c0)==1))){
 lcd.setCursor (0,1);
 lcd.print ("Decimal: 21");
}

  else if (((digitalRead(s0)==0))&&((digitalRead(s1)==1))&&((digitalRead(s2)==1))&&((digitalRead(s3)==0))&&((digitalRead(c0)==1))){
 lcd.setCursor (0,1);
 lcd.print ("Decimal: 22");
}

  else if (((digitalRead(s0)==1))&&((digitalRead(s1)==1))&&((digitalRead(s2)==1))&&((digitalRead(s3)==0))&&((digitalRead(c0)==1))){
 lcd.setCursor (0,1);
 lcd.print ("Decimal: 23");
}

  else if (((digitalRead(s0)==0))&&((digitalRead(s1)==0))&&((digitalRead(s2)==0))&&((digitalRead(s3)==1))&&((digitalRead(c0)==1))){
 lcd.setCursor (0,1);
 lcd.print ("Decimal: 24");
}

  else if (((digitalRead(s0)==1))&&((digitalRead(s1)==0))&&((digitalRead(s2)==0))&&((digitalRead(s3)==1))&&((digitalRead(c0)==1))){
 lcd.setCursor (0,1);
 lcd.print ("Decimal: 25");
}

  else if (((digitalRead(s0)==0))&&((digitalRead(s1)==1))&&((digitalRead(s2)==0))&&((digitalRead(s3)==1))&&((digitalRead(c0)==1))){
 lcd.setCursor (0,1);
 lcd.print ("Decimal: 26");
}

  else if (((digitalRead(s0)==1))&&((digitalRead(s1)==1))&&((digitalRead(s2)==0))&&((digitalRead(s3)==1))&&((digitalRead(c0)==1))){
 lcd.setCursor (0,1);
 lcd.print ("Decimal: 27");
}

  else if (((digitalRead(s0)==0))&&((digitalRead(s1)==0))&&((digitalRead(s2)==1))&&((digitalRead(s3)==1))&&((digitalRead(c0)==1))){
 lcd.setCursor (0,1);
 lcd.print ("Decimal: 28");
}

  else if (((digitalRead(s0)==1))&&((digitalRead(s1)==0))&&((digitalRead(s2)==1))&&((digitalRead(s3)==1))&&((digitalRead(c0)==1))){
 lcd.setCursor (0,1);
 lcd.print ("Decimal: 29");
}

  else if (((digitalRead(s0)==0))&&((digitalRead(s1)==1))&&((digitalRead(s2)==1))&&((digitalRead(s3)==1))&&((digitalRead(c0)==1))){
 lcd.setCursor (0,1);
 lcd.print ("Decimal: 30");
}

}
