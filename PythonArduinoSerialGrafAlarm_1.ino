char  car;
int   val_int;
float val_float;
int   val_rec;

void setup(){
  Serial.begin(9600);
}

void loop(){
  if(Serial.available()>0)
  {
    car = Serial.read();
    if(car == 'r')
    {
        val_int = analogRead(A0);
       //val_float = ((float)val_int/1023)*5;
       //val_rec = val_int>>9;
       Serial.println(val_int);
    }
  }
}
