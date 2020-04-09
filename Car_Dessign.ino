
char bdata;

int EnA = 6;
int IN1 = 7;
int IN2 = 8;
int IN3 = 9;
int IN4 = 10;
int EnB = 11;
int SPEED = 150;

void setup() {



     Serial.begin(9600);
     pinMode(EnA,OUTPUT);
     pinMode(IN1,OUTPUT);
     pinMode(IN2,OUTPUT);
     pinMode(IN3,OUTPUT);
     pinMode(IN4,OUTPUT);
     pinMode(EnB,OUTPUT);
   



}

void loop() {


  if (Serial.available()>1)
  
    {   
        bdata = Serial.read();   
    }
  //
//      switch(bdata){
//
//        case 'F'
//         FORWARD();
//         break;
//
//         case 'B'
//         FORWARD();
//         break;
//
//          case 'L'
//         FORWARD();
//         break;
//
//          case 'R'
//         FORWARD();
//         break;
//
//         case 'S'
//         FORWARD();
//         break;
//
//          case 'F'
//         FORWARD();
//         break;        
//        }
  
  
  //
  if(bdata == 'F'){
    
         FORWARD();
    }

    else if(bdata == 'B'){
         BACKWARD();
      }

    else if (bdata == 'L'){

          LEFT();
        
        }

     else if (bdata == 'R'){

           RIGHT ();
          }
          else if (bdata == '0'){

           SPEED = 0;
          }
          else if (bdata == '1'){

           SPEED = 50;
          }
          else if (bdata == '2'){

           SPEED = 70;
          }

        else if (bdata == '3'){

           SPEED = 90;
          }
          else if (bdata == '4'){

           SPEED = 100;
          }
          else if (bdata == '5'){

           SPEED = 120;
          }
          else if (bdata == '6'){

           SPEED = 150;
          }
          else if (bdata == '7'){

           SPEED = 170;
          }
          else if (bdata == '8'){

           SPEED = 200;
          }
          else if (bdata == '9'){

           SPEED = 220;
          }
          else if (bdata == 'q'){

           SPEED = 250;
          }
          
     else {
            
            STOPCAR();
            
            }
         

}

void  FORWARD(){

  //For Left Motor

   analogWrite(EnA,SPEED);
   digitalWrite(IN1,HIGH);
   digitalWrite(IN2,LOW);
   // For Righjt Motor
   digitalWrite(IN3,HIGH);
   digitalWrite(IN4,LOW);
   analogWrite(EnB,SPEED);
}


void  BACKWARD(){

  //For Left Motor

   analogWrite(EnA,SPEED);
   digitalWrite(IN1,LOW);
   digitalWrite(IN2,HIGH);
   // For Righjt Motor
   digitalWrite(IN3,LOW);
   digitalWrite(IN4,HIGH);
   analogWrite(EnB,SPEED);
}
 


void  LEFT(){

//For Left Motor

   analogWrite(EnA,SPEED);
   digitalWrite(IN1,LOW);
   digitalWrite(IN2,HIGH);
   // For Righjt Motor
   digitalWrite(IN3,HIGH);
   digitalWrite(IN4,LOW);
   analogWrite(EnB,SPEED);
 
}

void  RIGHT(){

   analogWrite(EnA,SPEED);
   digitalWrite(IN1,HIGH);
   digitalWrite(IN2,LOW);
   // For Righjt Motor
   digitalWrite(IN3,LOW);
   digitalWrite(IN4,HIGH);
   analogWrite(EnB,SPEED);
 
}


void  STOPCAR(){

   // For Left MOTOR
   analogWrite(EnA,0);
   digitalWrite(IN1,LOW);
   digitalWrite(IN2,LOW);
   // For Righjt Motor
   digitalWrite(IN3,LOW);
   digitalWrite(IN4,LOW);
   analogWrite(EnB,0);
 
}












