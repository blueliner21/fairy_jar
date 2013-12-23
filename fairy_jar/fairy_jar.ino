#define hall_sensor_GND 0
#define hall_sensor_VDD 1
#define blue_high 3
#define blue_low 4
#define green_high 5
#define green_low 6
#define white_high 7
#define white_low 8
#define pink_high 9
#define pink_low 10


void fairy_light();

void setup()
{
   pinMode(hall_sensor_VDD, OUTPUT);
   pinMode(blue_high, OUTPUT);
   pinMode(blue_low, OUTPUT);
   pinMode(green_high, OUTPUT);
   pinMode(green_low, OUTPUT);
   pinMode(white_high, OUTPUT);
   pinMode(white_low, OUTPUT);
   pinMode(pink_high, OUTPUT);
   pinMode(pink_low, OUTPUT);
}

void loop()
{
  digitalWrite(hall_sensor_VDD, HIGH);
  attachInterrupt(0,fairy_light,RISING); //Interrupt on Digital Pin 2
  detachInterrupt(0);
  delay(1000);
  digitalWrite(6,LOW);
  digitalWrite(7,LOW);
  
  
  
}


void fairy_light()
{
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
  digitalWrite(7, HIGH);
  digitalWrite(hall_sensor_VDD,LOW);
  
}

