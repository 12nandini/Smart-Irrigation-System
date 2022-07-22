#include <LiquidCrystal.h> //LCD Library
#define NOTE_C4 262
int temp;
//int T_Sensor = A4;
int M_Sensor = A0;
int P_led = 13;
int Speaker = 9;
int val;
int cel;
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
void setup()
{
 lcd.begin(16, 2);
 lcd.clear();
 pinMode(13,OUTPUT);
 pinMode(9,OUTPUT);
 Serial.begin(9600);
 lcd.setCursor(0,1);
 lcd.print("VIT CHENNAI");
Page | 30
 delay(2000);
 lcd.clear();
 lcd.setCursor(0,0);
 lcd.print("SMART");
 lcd.setCursor(0,1);
 lcd.print("IRIGATION SYSTEM");
 delay(2500);
 lcd.clear();
 delay(1000);
}
/*
 val = analogRead(T_Sensor); //Read Temperature sensor value
 int mv = ( val/1024.0)*5000;
 cel = mv/10;
 */
void loop()
{
 lcd.clear();
 int Moisture = analogRead(M_Sensor); //Read Moisture Sensor Value
 Serial.println(Moisture);
if (Moisture> 600) // for dry soil
 {
 lcd.setCursor(0,0);
Page | 31
 lcd.print("DRY SOIL");
 //lcd.setCursor(11,1);
 //lcd.print("SOIL");
 digitalWrite(13, HIGH);
 lcd.setCursor(0,1);
 lcd.print("PUMP:ON");
 tone(Speaker, NOTE_C4, 250);
 delay(500);
 }
 if (Moisture>= 400 && Moisture<=500) //for Moist Soil
 {
 lcd.setCursor(0,0);
 lcd.print("MOIST SOIL");
 //lcd.setCursor(11,1);
 //lcd.print("SOIL");
 digitalWrite(13,LOW);
 lcd.setCursor(0,1);
 lcd.print("PUMP:OFF");
 }
 if (Moisture < 400) // For Soggy soil
 {
 lcd.setCursor(0,0);
 lcd.print("SOGGY SOIL");
Page | 32
 //lcd.setCursor(11,1);
 //lcd.print("SOIL");
 digitalWrite(13,LOW);
 lcd.setCursor(0,1);
 lcd.print("PUMP:OFF");
 }
delay(1000);
}
