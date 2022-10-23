//   intialization for Counter Function code *************
int totalreadings = 0;
int recounter = 0;
int totalcars = 0;
int totalcarscounter = 0;

int totalreadings1 = 0;
int recounter1 = 0;
int totalcars1 = 0;
int totalcarscounter1 = 0;

int totalreadings2 = 0;
int recounter2 = 0;
int totalcars2 = 0;
int totalcarscounter2 = 0;

int totalreadings3 = 0;
int recounter3 = 0;
int totalcars3 = 0;
int totalcarscounter3 = 0;

//   final of intialization for Counter Function code *************



long interval_normal = 10000;
long interval_short = 5000;
long interval_long = 15000;
int a = 1;
int b = 1;
int c = 1;
int d = 1;
int aa = 8;
int bb = 3;
int cc = 5;
int dd = 1;

long x = 0;
long y = 0;
long z = 0;
long u = 0;


long previousmillis = 0;
long previousmillis2 = 0;
long previousmillis3 = 0;
long previousmillis4 = 0;




int GREEN = 12;
int RED = 13;

int GREEN1 = 10;
int RED1 = 11;

int GREEN2 = 8;
int RED2 = 9;

int GREEN3 = 6;
int RED3 = 7;


long assigner = 0;
long counter = 0 ;
long counter2 = 0;
long counter3 = 0;
long counter4 = 0;

void setup()
{
  Serial.begin(9600);
  
  pinMode(GREEN, OUTPUT);
  pinMode(RED, OUTPUT);
  pinMode(GREEN1, OUTPUT);
  pinMode(RED1, OUTPUT);
  pinMode(GREEN2, OUTPUT);
  pinMode(RED2, OUTPUT);
  pinMode(GREEN3, OUTPUT);
  pinMode(RED3, OUTPUT);
  Serial.println("Start!");

  //   intialization for Counter Function ******************
    pinMode(2,INPUT);
  pinMode(3,INPUT);
  pinMode(4,INPUT);
  pinMode(5,INPUT);
  //   intialization for Counter Function ******************
}


void loop () {
  
counter = totalcars ;
counter2 = totalcars1;
counter3 = totalcars2;
counter4 = totalcars3;

  
  unsigned long currentMillis = millis();

readingCars();
  
  if (assigner % 4 == 0){
//    previousmillis = currentMillis;
  
    if (counter > 30){
      if (currentMillis - previousmillis > 15000){
        roadAOpen();
        previousmillis = currentMillis;
        assigner ++;
        }        
      }
    else if (counter > 10){
      if (currentMillis - previousmillis > 8000){
        roadAOpen();
        previousmillis = currentMillis;
        assigner ++;   
      }  
    }
    else if (counter < 10){
      if (currentMillis - previousmillis > 3000){
        roadAOpen();
        previousmillis = currentMillis;
        assigner ++;
        
      } 
    }}

// Second Light ******************88

  if (assigner % 4 == 1){

  
    if (counter2 > 30){
      if (currentMillis - previousmillis > 15000){
        roadBOpen();
        previousmillis = currentMillis;
        assigner ++;
        }        
      }
    else if (counter2 > 10){
      if (currentMillis - previousmillis > 8000){
        roadBOpen();
        previousmillis = currentMillis;
        assigner ++;   
      }  
    }
    else if (counter2 < 10){
      if (currentMillis - previousmillis > 3000){
        roadBOpen();
        previousmillis = currentMillis;
        assigner ++;
      } 
    }
  
  }
  
// Third Light ******************88

  if (assigner % 4 == 2){

  
    if (counter3 > 30){
      if (currentMillis - previousmillis > 15000){
        roadCOpen();
        previousmillis = currentMillis;
        assigner ++;
        }        
      }
    else if (counter3 > 10){
      if (currentMillis - previousmillis > 8000){
        roadCOpen();
        previousmillis = currentMillis;
        assigner ++;   
      }  
    }
    else if (counter3 < 10){
      if (currentMillis - previousmillis > 3000){
        roadCOpen();
        previousmillis = currentMillis;
        assigner ++;

      } 
    }
  
  }
  
// Fourth Light ******************88

  if (assigner % 4 == 3){

  
    if (counter4 > 30){
      if (currentMillis - previousmillis > 15000){
        roadDOpen();
        previousmillis = currentMillis;
        assigner ++;
        }        
      }
    else if (counter4 > 10 ){
      if (currentMillis - previousmillis > 8000){
        roadDOpen();
        previousmillis = currentMillis;
        assigner ++;     
      }  
    }
    else if (counter4 < 10 ){
      if (currentMillis - previousmillis > 3000){
        roadDOpen();
        previousmillis = currentMillis;
        assigner ++;
      } 
    }
  
  }
  
  }

void roadAOpen() 
{
  digitalWrite(GREEN, HIGH);
  digitalWrite(RED, LOW);
  digitalWrite(GREEN1, LOW);
  digitalWrite(RED1, HIGH);
  digitalWrite(GREEN2, LOW);
  digitalWrite(RED2, HIGH);
  digitalWrite(GREEN3, LOW);
  digitalWrite(RED3, HIGH); 

}

void roadBOpen()
{
  digitalWrite(GREEN, LOW);
  digitalWrite(RED, HIGH);
  digitalWrite(GREEN1, HIGH);
  digitalWrite(RED1, LOW);
  digitalWrite(GREEN2, LOW);
  digitalWrite(RED2, HIGH);
  digitalWrite(GREEN3, LOW);
  digitalWrite(RED3, HIGH); 
}

void roadCOpen()
{
  digitalWrite(GREEN, LOW);
  digitalWrite(RED, HIGH);
  digitalWrite(GREEN1, LOW);
  digitalWrite(RED1, HIGH);
  digitalWrite(GREEN2, HIGH);
  digitalWrite(RED2, LOW);
  digitalWrite(GREEN3, LOW);
  digitalWrite(RED3, HIGH);
}

void roadDOpen()
{
  digitalWrite(GREEN, LOW);
  digitalWrite(RED, HIGH);
  digitalWrite(GREEN1, LOW);
  digitalWrite(RED1, HIGH);
  digitalWrite(GREEN2, LOW);
  digitalWrite(RED2, HIGH);
  digitalWrite(GREEN3, HIGH);
  digitalWrite(RED3, LOW); 
}

void readingCars () // Function for counting Cars *****************
{
   if (digitalRead(2) == LOW)
  {
    totalreadings = totalreadings + 1;
    delay(10);
    
  }

  else if (digitalRead(3) == LOW)
  {
    totalreadings1 = totalreadings1 + 1;
    delay(10);
    
  }
  
  else if (digitalRead(4) == LOW)
  {
    totalreadings2 = totalreadings2 + 1;
    delay(10);
    
  }
  else if (digitalRead(5) == LOW)
  {
    totalreadings3 = totalreadings3 + 1;
    delay(10);
    
  }  

  else 
  { 
    if (totalreadings>recounter)
    {
      recounter = totalreadings;
      totalcars = totalcars + 1;
      Serial.println(totalcars);

    }

    else if (totalreadings1>recounter1)
    {
      recounter1 = totalreadings1;
      totalcars1 = totalcars1 + 1;
      Serial.println(totalcars1);
    }

    else if (totalreadings2>recounter2)
      {
        recounter2 = totalreadings2;
        totalcars2 = totalcars2 + 1;
        Serial.println(totalcars2);
      }

    else if (totalreadings3>recounter3)
    {
      recounter3 = totalreadings3;
      totalcars3 = totalcars3 + 1;
      Serial.println(totalcars3);
    }
    
  }; 
};
