/* Arduino Tutorial - Watel Level Sensor 40mm
   More info: */

int read0 = A0; //Sensor AO pin to Arduino pin A0
int read1 = A1;
int read2 = A2;
int read3 = A3;
int read4 = A4;
int value1;          //Variable to store the incomming data
int value2;
int value3;
int value4;
int value5;

void setup()
{
  //Begin serial communication
  Serial.begin(9600);
  
}

void loop()
{
  value1 = analogRead(read0); //Read data from analog pin and store it to value variable
  value2 = analogRead(read1); //Read data from analog pin and store it to value variable
  value3 = analogRead(read2); //Read data from analog pin and store it to value variable
  value4 = analogRead(read3); //Read data from analog pin and store it to value variable
  value5 = analogRead(read4); //Read data from analog pin and store it to value variable
  
  if (value5>514 && value5<=516){
    //Serial.println(value5);
    Serial.println("Water level: 20mm to 25mm");}

  else if (value4>512 && value4<=514){
    //Serial.println(value4);
    Serial.println("Water level: 15mm to 20mm");}  
  
  else if (value3>511 && value3<=513){
    //Serial.println(value3);
    Serial.println("Water level: 10mm to 15mm");}
  
  else if (value2>453 && value2<=455){
    //Serial.println(value2);
    Serial.println("Water level: 5mm to 10mm");}
  
  else if (value1>513 && value1<=514){
    //Serial.println(value1);
    Serial.println("Water level: 0mm to 5mm");}
    
  else
    Serial.println("Water level: not reached!!");

  /*Serial.println(value1);
  Serial.println(value2);
  Serial.println(value3);
  Serial.println(value4);
  Serial.println(value5);*/
  delay(500); // Check for new value every 5 sec
  
}
  

