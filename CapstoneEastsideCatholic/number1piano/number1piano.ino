//by Mia
// this code will use capacitive touch to turn on an LED

int ckeyvalue;
int c_key = 5 ;
int dkeyvalue;
int d_key = 9 ; 
int ekeyvalue;
int e_key = 11 ;
int cskeyvalue;
int cs_key = 6 ;
int dskeyvalue;
int ds_key = 10;
int buzzerpin = A2;
void setup() {
  // put your setup code here, to run once:
  pinMode(c_key,INPUT);
  pinMode(buzzerpin, OUTPUT);
  pinMode(d_key,INPUT);
  pinMode(e_key,INPUT);
  pinMode(cs_key,INPUT);
  pinMode(ds_key,INPUT);
  

  Serial.begin(9600);
}
 
void loop()
{
  // put your main code here, to run repeatedly:
 ckeyvalue = readCapacitivePin(c_key);
dkeyvalue = readCapacitivePin(d_key);
ekeyvalue = readCapacitivePin(e_key);
cskeyvalue = readCapacitivePin(cs_key);
dskeyvalue = readCapacitivePin(ds_key);
  
  if(ckeyvalue>1){
   Serial.println("the c_key is pressed");
   tone(buzzerpin, 262, 10);    
 }
   if(dkeyvalue>1){
    Serial.println("the d_key is pressed");
   tone(buzzerpin, 294, 10);
   
       
 }
  if(ekeyvalue>1){
     Serial.println("the e_key is pressed");
   tone(buzzerpin, 330, 10);    
 }
 if(cskeyvalue>1){
   Serial.println("the cs_key is pressed");
   tone(buzzerpin, 277, 10);    
 }
 if(dskeyvalue>1){
   Serial.println("the ds_key is pressed");
   tone(buzzerpin, 311, 10);    
 }
}
