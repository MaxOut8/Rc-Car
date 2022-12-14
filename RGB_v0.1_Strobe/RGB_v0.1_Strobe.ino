
//RGB definations 
int B_LED=8;  
int R_LED=7;  
int E_VCC=4; 
int G_LED=2; 

//Enable Defination 
int E_1=3;
int E_2=5;


void setup() {
  pinMode(R_LED,OUTPUT);
  pinMode(B_LED,OUTPUT);
  pinMode(G_LED,OUTPUT);
  pinMode(E_VCC,OUTPUT);
  pinMode(E_1,OUTPUT);
  pinMode(E_2,OUTPUT);
  
//RGB at initially all off 
digitalWrite(E_VCC,HIGH);
digitalWrite(R_LED,HIGH);
digitalWrite(B_LED,HIGH);
digitalWrite(G_LED,HIGH);

//All Enable Off
digitalWrite(E_1,LOW);
digitalWrite(E_2,LOW);


}

void loop() {

full_E_ON();

RED_GLOW();
delay(60);
RED_HLOW();
delay(60);

BLUE_GLOW();
delay(30);
BLUE_HLOW();
delay(30);


GREEN_GLOW();
delay(30);
GREEN_HLOW();
delay(30);

}
void GREEN_GLOW()
{
digitalWrite(G_LED,LOW); //RED Glow As low 
}

void BLUE_GLOW()
{
digitalWrite(B_LED,LOW); //RED Glow As low 
}


void RED_GLOW()
{
digitalWrite(R_LED,LOW); //RED Glow As low 
}
//---------------------------------------------------------------------------OFF Functions--------------------------------------------------------------------//
void GREEN_HLOW()
{
digitalWrite(G_LED,HIGH); //RED Glow As low 
}

void BLUE_HLOW()
{
digitalWrite(B_LED,HIGH); //RED Glow As low 
}


void RED_HLOW()
{
digitalWrite(R_LED,HIGH); //RED Glow As low 
}

//---------------------------------------------------------------------------OFF Functions--------------------------------------------------------------------//


void Vcc_ON()
{
digitalWrite(E_VCC,HIGH);  // Generate on OUT 2 ----> +12v   
}
void full_E_ON()
{
digitalWrite(E_1,HIGH);  //Enable Channel 1 
digitalWrite(E_2,HIGH);  //Enable Channel 2   
}


void one_E_ON()
{
  digitalWrite(E_1,HIGH);  //Enable Channel 1 
}

void two_E_ON()
{
  digitalWrite(E_2,HIGH);  //Enable Channel 2 
}