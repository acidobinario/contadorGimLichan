//BOTONES xd
#define aumentar 3
#define dismin 2
#define reset 4
//PINES de DISPLAY----
#define b0 6 //bcd0 1
#define b1 7 //bcd0 2
#define b2 8 //bcd0 3
#define b3 9 //bcd0 4
#define b00 10 //bcd1 1
#define b01 11 //bcd1 2
#define b02 12 //bcd1 3
#define b03 13 //bcd1 4
//---------------
int valor_actual = 0;

bool compareState = false;
int aumentarState;
int lastaumentarState;
int disminuirState;
int lastDisminuirState;
int val1; // guarda el valor a mostrar en display 1
int val2; // lo mismo pero en el display 2


void setup() {
 Serial.begin(9600);
 Serial.println("counter");
  // INPUT: 
  pinMode(aumentar, INPUT_PULLUP);
  pinMode(dismin, INPUT_PULLUP);
  pinMode(reset, INPUT_PULLUP);
  
  //display
  pinMode(b0,OUTPUT);
  pinMode(b1,OUTPUT);
  pinMode(b2,OUTPUT);
  pinMode(b3,OUTPUT);
  pinMode(b00,OUTPUT);
  pinMode(b01,OUTPUT);
  pinMode(b02,OUTPUT);
  pinMode(b03,OUTPUT);
  
// OUTPUT:
//  pinMode(led, OUTPUT);
//  digitalWrite(led, HIGH);
//  val = 0;
  //ero();
  delay(100);

}

void loop() {
 count();
 Display();
  Reset();
}
void Reset(){
  if (digitalRead(reset) == LOW){
    val1 = 0;
    val2 = 0;
    a_0();
    b_0();
    Serial.println("reseteado xd");
    }
}
// {*} CONTADOR ---------------

void count(){
  //aumentarCount
  aumentarState = digitalRead(aumentar);
  disminuirState = digitalRead(dismin);
  if (aumentarState != lastaumentarState) {
    delay(90);//delay
    if (aumentarState == LOW) {   
      val1++;
      if (val1 == 10){
        val1 = 0;
        val2++;
        }
        Serial.println(val2 + "" +val1);
    }
    delay(50);
  }
    lastaumentarState = aumentarState;
 if (disminuirState != lastDisminuirState) {
    delay(90);
    if (disminuirState == LOW) { 
      Serial.println("low");  
      if(val1 == 0){
        val2--;
        val1 = 9;
        }else{
          val1 --;
          }
          Serial.println("val1" + val1);
                    Serial.println("val2" + val2);

    }
    delay(50);
  }
    lastDisminuirState = disminuirState;
}

void Display(){
  switch (val1){
    case 0:
      a_0();
      break;
    case 1:
      a_1();
      break;
    case 2:
      a_2();
      break;
    case 3:
      a_3();
      break;
    case 4:
      a_4();
      break;
    case 5:
      a_5();
      break;
    case 6:
      a_6();
      break;
    case 7:
      a_7();
      break;
    case 8:
      a_8();
      break;
    case 9:
      a_9();
      break;
  }
  switch (val2){
    case 0:
      b_0();
      break;
    case 1:
      b_1();
      break;
    case 2:
      b_2();
      break;
    case 3:
      b_3();
      break;
    case 4:
      b_4();
      break;
    case 5:
      b_5();
      break;
    case 6:
      b_6();
      break;
    case 7:
      b_7();
      break;
    case 8:
      b_8();
      break;
    case 9:
      b_9();
      break;
  }
}

// {*} display 1 ------------
void a_0(){
  digitalWrite(b0,0);
  digitalWrite(b1,0);
  digitalWrite(b2,0);
  digitalWrite(b3,0);
  }
void a_1(){
  digitalWrite(b0,0);
  digitalWrite(b1,0);
  digitalWrite(b2,0);
  digitalWrite(b3,1);
  }
void a_2(){
  digitalWrite(b0,0);
  digitalWrite(b1,0);
  digitalWrite(b2,1);
  digitalWrite(b3,0);
  }
void a_3(){
  digitalWrite(b0,0);
  digitalWrite(b1,0);
  digitalWrite(b2,1);
  digitalWrite(b3,1);
  }
void a_4(){
  digitalWrite(b0,0);
  digitalWrite(b1,1);
  digitalWrite(b2,0);
  digitalWrite(b3,0);
  }
void a_5(){
  digitalWrite(b0,0);
  digitalWrite(b1,1);
  digitalWrite(b2,0);
  digitalWrite(b3,1);
  }
void a_6(){
  digitalWrite(b0,0);
  digitalWrite(b1,1);
  digitalWrite(b2,1);
  digitalWrite(b3,0);
  }
void a_7(){
  digitalWrite(b0,0);
  digitalWrite(b1,1);
  digitalWrite(b2,1);
  digitalWrite(b3,1);
  }
void a_8(){
  digitalWrite(b0,1);
  digitalWrite(b1,0);
  digitalWrite(b2,0);
  digitalWrite(b3,0);
  }
void a_9(){
  digitalWrite(b0,1);
  digitalWrite(b1,0);
  digitalWrite(b2,0);
  digitalWrite(b3,1);
  }

  
// {*} display 2 -------
void b_0(){
  digitalWrite(b00,0);
  digitalWrite(b01,0);
  digitalWrite(b02,0);
  digitalWrite(b03,0);
  }
void b_1(){
  digitalWrite(b00,0);
  digitalWrite(b01,0);
  digitalWrite(b02,0);
  digitalWrite(b03,1);
  }
void b_2(){
  digitalWrite(b00,0);
  digitalWrite(b01,0);
  digitalWrite(b02,1);
  digitalWrite(b03,0);
  }
void b_3(){
  digitalWrite(b00,0);
  digitalWrite(b01,0);
  digitalWrite(b02,1);
  digitalWrite(b03,1);
  }
void b_4(){
  digitalWrite(b00,0);
  digitalWrite(b01,1);
  digitalWrite(b02,0);
  digitalWrite(b03,0);
  }
void b_5(){
  digitalWrite(b00,0);
  digitalWrite(b01,1);
  digitalWrite(b02,0);
  digitalWrite(b03,1);
  }
void b_6(){
  digitalWrite(b00,0);
  digitalWrite(b01,1);
  digitalWrite(b02,1);
  digitalWrite(b03,0);
  }
void b_7(){
  digitalWrite(b00,0);
  digitalWrite(b01,1);
  digitalWrite(b02,1);
  digitalWrite(b03,1);
  }
void b_8(){
  digitalWrite(b00,1);
  digitalWrite(b01,0);
  digitalWrite(b02,0);
  digitalWrite(b03,0);
  }
void b_9(){
  digitalWrite(b00,1);
  digitalWrite(b01,0);
  digitalWrite(b02,0);
  digitalWrite(b03,1);
  }
