//Immidate Turn Indicator Pins Assesment 
int Green=2; // OUT 1  // IN1
int Vcc=4;   //OUT 2   //IN2
int Red=7;   //OUT 3    //IN 3
int Blue=8;  // OUT 4  //IN 4

int En_1=3;  //  Green , Vcc 
int En_2=5;  //   Red , Blue

//Input JoyPad _____2 
int I_T_In = A2;



void setup() {
Serial.begin(9600);
pinMode(I_T_In,INPUT_PULLUP);
pinMode(Red,OUTPUT);
pinMode(Green,OUTPUT);
pinMode(En_1,OUTPUT);
pinMode(Vcc,OUTPUT);
pinMode(En_2,OUTPUT);


}

void loop() {
     int I_T_I_in=analogRead(I_T_In);
     //Serial.println(I_T_I_in);
     int I_T_M=map(I_T_I_in, 217, 19, 0, 10);
     Serial.println(I_T_M);
   switch (I_T_M) {
        case 0:
        Im_Tu_In();
        //delay(1000);
         Serial.println("Left Imidiate Turn Indicator On Requested");
        break;
        case 10:
         Im_Tu_In();
         Serial.println("Right Imidiate Turn Indicator On Requested");
        break;
                             
default:
Serial.println("  ");
}
 

}
//---------------------------------------------------------------------Imidiate Turn Indicator--------------------------------------------------------------------------//
void Im_Tu_In()
{

//full_E_ON();
digitalWrite(En_1,HIGH);  //Enable Channel 1 
digitalWrite(En_2,HIGH);  //Enable Channel 2


//Feed POWER to LEDs 

digitalWrite(Vcc,HIGH);  // Generate on OUT 2 ----> +12v   


//On Red LED 
digitalWrite(Red,LOW); //RED Glow As low 
delay(60);
// On Blue LED 
digitalWrite(Blue,LOW); //RED Glow As low 
delay(30);

//Green LED Flash 30ms
digitalWrite(Green,LOW); //RED Glow As low 
delay(30);
digitalWrite(Green,HIGH); //RED Glow As low 
delay(30);

digitalWrite(Red,HIGH); //RED Glow As low 
delay(60);
digitalWrite(Blue,HIGH); //RED Glow As low 
delay(30);
  
}



