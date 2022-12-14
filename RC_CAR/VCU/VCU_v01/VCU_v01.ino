
//Pick Drop controlles 
// Enable 1 works for pick and drop 
int Pick=2;        // IN 1 
int Drop=4;        // IN  2 

//Enable 2 works for up and down 
int Arm_up=7;     // IN3
int Arm_down=8;   // IN4

//Enable pins
int En_1=3;
int En_2=5;

//Input JoyPad _____2
int J_1_x_axis = A0;
int J_1_y_axis = A1;
int J_2_x_axis = A2;
int J_2_y_axis = A3;

void setup() {
  Serial.begin(9600);
pinMode(J_1_x_axis,INPUT_PULLUP);
pinMode(J_1_y_axis,INPUT_PULLUP);
pinMode(J_2_x_axis,INPUT_PULLUP);
pinMode(J_2_y_axis,INPUT_PULLUP);

//Pick & drop attrib 
pinMode(Arm_up,OUTPUT);
pinMode(Arm_down,OUTPUT);
pinMode(Pick,OUTPUT);
pinMode(Drop,OUTPUT);
//Enable pins Attrib set
pinMode(En_1,OUTPUT);
pinMode(En_2,OUTPUT);
}

void loop() {
   int P_D=analogRead(J_2_x_axis);
     //Serial.println(I_T_I_in);
     int P_D_in=map(P_D, 217, 19, 0, 10);
    // Serial.println(P_D_in);
    
 int U_D=analogRead(J_2_y_axis);
     //Serial.println(I_T_I_in);
     int U_D_in=map(U_D, 217, 19, 0, 10);
    // Serial.println(U_D_in);
    
   switch (P_D_in) {
        case 0:
        //Left_turn();
        //delay(1000);
         Serial.println("Pick Imidiate Turn Indicator On Requested");
     digitalWrite(En_1,HIGH);  //Enable Channel 1 
        digitalWrite(En_2,LOW);  //Enable Channel 2

        //Feed POWER to LEDs 

        digitalWrite(Pick,HIGH);  // Generate on OUT 2 ----> +12v   
        delay(60);
        digitalWrite(Pick,LOW);  // Generate on OUT 2 ----> +12v   
        delay(60); 
        break;
        case 10:
        // Right_turn();
         Serial.println("Right Imidiate Turn Indicator On Requested");
         digitalWrite(En_1,HIGH);  //Enable Channel 1 
        digitalWrite(En_2,LOW);  //Enable Channel 2

        //Feed POWER to LEDs 

        digitalWrite(Drop,HIGH);  // Generate on OUT 2 ----> +12v   
        delay(60);
        digitalWrite(Drop,LOW);  // Generate on OUT 2 ----> +12v   
        delay(60); 
        break;
                             
default:
Serial.println("  ");
}
 switch (U_D_in) {
        case 0:
        //Left_turn();
        //delay(1000);
         Serial.println("UP Imidiate Turn Indicator On Requested");
     digitalWrite(En_1,LOW);  //Enable Channel 1 
        digitalWrite(En_2,HIGH);  //Enable Channel 2

        //Feed POWER to LEDs 

        digitalWrite(Arm_up,HIGH);  // Generate on OUT 2 ----> +12v   
        delay(60);
        digitalWrite(Arm_up,LOW);  // Generate on OUT 2 ----> +12v   
        delay(60); 
        break;
        case 10:
        // Right_turn();
         Serial.println("Down Imidiate Turn Indicator On Requested");
         digitalWrite(En_1,LOW);  //Enable Channel 1 
        digitalWrite(En_2,HIGH);  //Enable Channel 2

        //Feed POWER to LEDs 

        digitalWrite(Arm_down,HIGH);  // Generate on OUT 2 ----> +12v   
        delay(60);
        digitalWrite(Arm_down,LOW);  // Generate on OUT 2 ----> +12v   
        delay(60); 
        break;
                             
default:
Serial.println("  ");
}

}

void Left_turn()
{

//full_E_ON();
digitalWrite(En_1,HIGH);  //Enable Channel 1 
digitalWrite(En_2,LOW);  //Enable Channel 2


//Feed POWER to LEDs 

digitalWrite(Arm_up,HIGH);  // Generate on OUT 2 ----> +12v   
delay(60);
digitalWrite(Arm_down,HIGH);  // Generate on OUT 2 ----> +12v   
delay(60);

  
}

void Right_turn()
{

//
digitalWrite(En_1,LOW);  //Enable Channel 1
digitalWrite(En_2,HIGH);  //Enable Channel 2



//

digitalWrite(Drop,HIGH);  // Generate on OUT 2 ----> +12v   
delay(60);
digitalWrite(Drop,HIGH);  // Generate on OUT 2 ----> +12v   
delay(60);

  
}
