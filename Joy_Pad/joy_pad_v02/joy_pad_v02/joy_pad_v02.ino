int joy_1_x=A0;
int joy_1_y=A1;
int joy_2_x=A2;
int joy_2_y=A3;



void setup() {
  Serial.begin(115200);
pinMode(joy_1_x,INPUT_PULLUP);
pinMode(joy_1_y,INPUT_PULLUP);
pinMode(joy_2_x,INPUT_PULLUP);
pinMode(joy_2_y,INPUT_PULLUP);
Serial.println("Initiallization Done ......");

}

void loop() {
//Read Joy PAD 1 & 2 
int j1_x_axis = analogRead(joy_1_x);
int j1_y_axis = analogRead(joy_1_y);
int j2_x_axis = analogRead(joy_2_x);
int j2_y_axis = analogRead(joy_2_y);

//Mapping Raw data from JOY PAD 
int speed0=map(j1_x_axis, 16, 208, 0, 10);
int speed1=map(j1_y_axis, 15, 213, 0, 10);
int speed2=map(j2_x_axis, 17, 208, 0, 10);
int speed3=map(j2_y_axis, 17, 195, 0, 10);

//Serial Print Raw Data For calibration 
// Serial.print("\n j1_x_axis --> ");
// Serial.print(speed0); 
// Serial.print("\t||\t j1_y_axis   ");
// Serial.print(speed1);   
// Serial.print("\t j2_x_axis --> ");
// Serial.print(speed2); 
// Serial.print("\t||\t j2_y_axis   ");
// Serial.print(speed3);
//--------------------------------------------Joypad 1 x axis Key Sense Logic------------------------
if(speed0==5)
{
Serial.print("\n No key is Input ");
  
}

if(speed0<5)
{
Serial.print("\n Joy Pad 1 Left is pressed");
}
if(speed0>5)

{
Serial.print("\n Joy Pad 1 Right is pressed");
}

// !--------------------------------------------Joypad x axis Key Sense Logic------------------------
//--------------------------------------------Joypad 1 y axis Key Sense Logic------------------------
if(speed1==5)
{
Serial.print("\t No key is Input ");
  
}

if(speed1<5)
{
Serial.print("\t Joy Pad 1 Down is pressed");
}
if(speed1>5)

{
Serial.print("\t || Joy Pad 1 Up is pressed");
}

// !--------------------------------------------Joypad 1 y axis Key Sense Logic------------------------
//--------------------------------------------Joypad 2 x axis Key Sense Logic------------------------
if(speed2==5)
{
Serial.print("\t No key is Input ");
  
}

if(speed2<5)
{
Serial.print("\t Joy Pad 2 Right is pressed");
}
if(speed2>5)

{
Serial.print("\t || Joy Pad 2 Left is pressed");
}

// !--------------------------------------------Joypad 2 x axis Key Sense Logic------------------------
//--------------------------------------------Joypad 2 y axis Key Sense Logic------------------------
if(speed3==5)
{
Serial.print("\t No key is Input ");
  
}

if(speed3<5)
{
Serial.print("\t Joy Pad 2 Up is pressed");
}
if(speed3>5)

{
Serial.print("\t || Joy Pad 2 Down is pressed");
}

// !--------------------------------------------Joypad 1 y axis Key Sense Logic------------------------


}
