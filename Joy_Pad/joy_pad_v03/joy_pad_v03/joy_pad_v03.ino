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
int speed1=map(j1_y_axis, 15, 215, 0, 10);
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

 switch (speed1) {
        case 0:
         Serial.println("Fast DOWN key is pressed");
        break;
        case 1 ... 4:
         Serial.println("DOWN key is pressed");
        break;
        
        case 6 ... 9:
         Serial.println("UP key is pressed");
        break;
        case 10:
         Serial.println("Fast UP key is pressed");
        break;
                             
default:
Serial.println("please input");
}




}