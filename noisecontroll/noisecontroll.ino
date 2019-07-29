/*********TACHLOG powered********
*********www.troncart.com*******
**electronics components online**
***********Noise Control**************
***********29-07-2019**************
*/
 const int buzzer=13; // ledpin and soundpin are not changed throughout the process 
const int soundpin=A0;
const int threshold=50; // sets threshold value for sound sensor
  void setup() 
    {
      Serial.begin(9600);
      pinMode(buzzer,OUTPUT);
      pinMode(soundpin,INPUT);
    }

    void loop() 
      {
        int soundsens=analogRead(soundpin); // reads analog data from sound sensor
        if (soundsens>=threshold)
         {
           digitalWrite(buzzer,HIGH); //turns led on
           Serial.println(soundsens);
           delay(1000);
        }
       else
        {
          Serial.println(soundsens);
          digitalWrite(buzzer,LOW);
          delay(1000);
         }
    }
