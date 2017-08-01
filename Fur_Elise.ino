

const int buzzer = 5; //vom folosi pinul 5 pentru a controla buzzerul
const int songspeed = 1.5; //pentru o versiune mai lenta pune un numar mai mare

const int led1 = 3; //pinul primul led rosu       
const int led2 = 6; //pinul pentru ledul albastru
const int led3 = 9; //pinul pentru ledul verde
const int led4 = 10; //pinul pentru al doilea led rosu

void Beep(int nota, int durata){
  int wait = durata * songspeed;
  tone(buzzer,nota,wait);
  if (nota<=123)
  {
     analogWrite(led1, nota%256);
     analogWrite(led2, 0);
     analogWrite(led3, 0);
     analogWrite(led4, 0);
  }
  else if(nota<=246)
    {
       analogWrite(led1, 0);
       analogWrite(led2, nota%256);
       analogWrite(led3, 0);
       analogWrite(led4, 0);  
    }
   else if(nota<=493)
   {
    analogWrite(led1, 0);
       analogWrite(led2, 0);
       analogWrite(led3, nota%256);
       analogWrite(led4, 0);  
   }
   else
   {
     analogWrite(led1, 0);
       analogWrite(led2, 0);
       analogWrite(led3, 0);
       analogWrite(led4, nota%256);  
   }
  delay(wait);
}

void setup() {
    pinMode(led1, OUTPUT);
    pinMode(led2, OUTPUT);
    pinMode(led3, OUTPUT);
    pinMode(led4, OUTPUT);
     //1
    Beep(659,200); //E5
    Beep(622,200); //Eb5
    //2
    Beep(659,200); //E5
    Beep(622,200); //Eb5
    Beep(659,200); //E5
    Beep(493,200); //B4
    Beep(587,200); //D5
    Beep(523,200); //C5
    //3
    Beep(440,400); //A4
    Beep(110,200); //A2
    Beep(164,200); //E3
    Beep(220,200); //A3
    Beep(261,200); //C4
    Beep(329,200); //E4
    Beep(440,200); //A4
    //4
    Beep(493,400); //B4
    Beep(82,200); //E2
    Beep(164,200); //E3
    Beep(207,200); //Ab3
    Beep(329,200); //E4
    Beep(415,200); //Ab4
    Beep(493,200); //B4
    //5
    Beep(523,400); //C5
    Beep(110,200); //A2
    Beep(164,200); //E3
    Beep(220,200); //A3
    Beep(329,200); //E4
    Beep(659,200); //E5
    Beep(622,200); //Eb5
    //6
    Beep(659,200); //E5
    Beep(622,200); //Eb5
    Beep(659,200); //E5
    Beep(493,200); //B4
    Beep(587,200); //D5
    Beep(523,200); //C5
    //7
    Beep(440,400); //A4
    Beep(110,200); //A2
    Beep(164,200); //E3
    Beep(220,200); //A3
    Beep(261,200); //C4
    Beep(329,200); //E4
    Beep(440,200); //A4
    //8
    Beep(493,400); //B4
    Beep(82,200); //E2
    Beep(164,200); //E3
    Beep(207,200); //Ab3
    Beep(329,200); //E4
    Beep(523,200); //C5
    Beep(493,200); //B4
    //9
    Beep(440,600); //A4
    Beep(110,200); //A2
    Beep(164,200); //E3
    Beep(220,200); //A3
    Beep(440,200); //A4
    Beep(659,200); //E5
    Beep(622,200); //Eb5
    //10
    Beep(659,200); //E5
    Beep(622,200); //Eb5
    Beep(659,200); //E5
    Beep(493,200); //B4
    Beep(587,200); //D5
    Beep(523,200); //C5
    //11
    Beep(440,400); //A4
    Beep(110,200); //A2
    Beep(164,200); //E3
    Beep(220,200); //A3
    Beep(261,200); //C4
    Beep(329,200); //E4
    Beep(440,200); //A4
    //12
    Beep(493,400); //B4
    Beep(82,200); //E2
    Beep(164,200); //E3
    Beep(207,200); //Ab3
    Beep(329,200); //E4
    Beep(415,200); //Ab4
    Beep(493,200); //B4
    //13
    Beep(523,400); //C5
    Beep(110,200); //A2
    Beep(164,200); //E3
    Beep(220,200); //A3
    Beep(329,200); //E4
    Beep(659,200); //E5
    Beep(622,200); //Eb5
    //14
    Beep(659,200); //E5
    Beep(622,200); //Eb5
    Beep(659,200); //E5
    Beep(493,200); //B4
    Beep(587,200); //D5
    Beep(523,200); //C5
    //15
    Beep(440,400); //A4
    Beep(110,200); //A2
    Beep(164,200); //E3
    Beep(220,200); //A3
    Beep(261,200); //C4
    Beep(329,200); //E4
    Beep(440,200); //A4
    //16
    Beep(493,400); //B4
    Beep(82,200); //E2
    Beep(164,200); //E3
    Beep(207,200); //Ab3
    Beep(329,200); //E4
    Beep(523,200); //C5
    Beep(493,200); //B4
    //17
    Beep(440,400); //A4
    Beep(110,200); //A2
    Beep(164,200); //E3
    Beep(220,200); //A3
    Beep(493,200); //B4
    Beep(523,200); //C5
    Beep(587,200); //D5
    //18
    Beep(659,400); //E5
    Beep(130,200); //C3
    Beep(195,200); //G3
    Beep(261,200); //C4
    Beep(391,200); //G4
    Beep(698,200); //F5
    Beep(659,200); //E5
    //19
    Beep(587,400); //D5
    Beep(97,200); //G2
    Beep(195,200); //G3
    Beep(246,200); //B3
    Beep(349,200); //F4
    Beep(659,200); //E5
    Beep(587,200); //D5
    //20
    Beep(523,400); //C5
    Beep(110,200); //A2
    Beep(164,200); //E3
    Beep(220,200); //A3
    Beep(329,200); //E4
    Beep(587,200); //D5
    Beep(523,200); //C5
    //21
    Beep(493,400); //B4
    Beep(82,200); //E2
    Beep(164,200); //E3
    Beep(329,200); //E4
    Beep(329,200); //E4
    Beep(659,200); //E5
    Beep(329,200); //E4
    //22
    Beep(659,200); //E5
    Beep(659,200); //E5
    Beep(1318,200); //E6
    Beep(622,200); //Eb5
    Beep(659,200); //E5
    Beep(622,200); //Eb5
    //23
    Beep(659,200); //E5
    Beep(622,200); //Eb5
    Beep(659,200); //E5
    Beep(622,200); //Eb5
    Beep(659,200); //E5
    Beep(622,200); //Eb5
    //24
    Beep(659,200); //E5
    Beep(622,200); //Eb5
    Beep(659,200); //E5
    Beep(493,200); //B4
    Beep(587,200); //D5
    Beep(523,200); //C5
    //25
    Beep(440,400); //A4
    Beep(110,200); //A2
    Beep(164,200); //E3
    Beep(220,200); //A3
    Beep(261,200); //C4
    Beep(329,200); //E4
    Beep(440,200); //A4
    //26
    Beep(493,400); //B4
    Beep(82,200); //E2
    Beep(164,200); //E3
    Beep(207,200); //Ab3
    Beep(329,200); //E4
    Beep(415,200); //Ab4
    Beep(493,200); //B4
    //27
    Beep(523,400); //C5
    Beep(110,200); //A2
    Beep(164,200); //E3
    Beep(220,200); //A3
    Beep(329,200); //E4
    Beep(659,200); //E5
    Beep(622,200); //Eb5
    //28
    Beep(659,200); //E5
    Beep(622,200); //Eb5
    Beep(659,200); //E5
    Beep(493,200); //B4
    Beep(587,200); //D5
    Beep(523,200); //C5
    //29
    Beep(440,400); //A4
    Beep(110,200); //A2
    Beep(164,200); //E3
    Beep(220,200); //A3
    Beep(261,200); //C4
    Beep(329,200); //E4
    Beep(440,200); //A4
    //30
    Beep(493,400); //B4
    Beep(82,200); //E2
    Beep(164,200); //E3
    Beep(207,200); //Ab3
    Beep(329,200); //E4
    Beep(523,200); //C5
    Beep(493,200); //B4
    //31
    Beep(440,400); //A4
    Beep(110,200); //A2
    Beep(164,200); //E3
    Beep(220,200); //A3
    Beep(493,200); //B4
    Beep(523,200); //C5
    Beep(587,200); //D5
    //32
    Beep(659,400); //E5
    Beep(130,200); //C3
    Beep(195,200); //G3
    Beep(261,200); //C4
    Beep(391,200); //G4
    Beep(698,200); //F5
    Beep(659,200); //E5
    //33
    Beep(587,400); //D5
    Beep(97,200); //G2
    Beep(195,200); //G3
    Beep(246,200); //B3
    Beep(349,200); //F4
    Beep(659,200); //E5
    Beep(587,200); //D5
    //34
    Beep(523,400); //C5
    Beep(110,200); //A2
    Beep(164,200); //E3
    Beep(220,200); //A3
    Beep(329,200); //E4
    Beep(587,200); //D5
    Beep(523,200); //C5
    //35
    Beep(493,400); //B4
    Beep(82,200); //E2
    Beep(164,200); //E3
    Beep(329,200); //E4
    Beep(329,200); //E4
    Beep(659,200); //E5
    Beep(329,200); //E4
    //36
    Beep(659,200); //E5
    Beep(659,200); //E5
    Beep(1318,200); //E6
    Beep(622,200); //Eb5
    Beep(659,200); //E5
    Beep(622,200); //Eb5
    //37
    Beep(659,200); //E5
    Beep(622,200); //Eb5
    Beep(659,200); //E5
    Beep(622,200); //Eb5
    Beep(659,200); //E5
    Beep(622,200); //Eb5
    //38
    Beep(659,200); //E5
    Beep(622,200); //Eb5
    Beep(659,200); //E5
    Beep(493,200); //B4
    Beep(587,200); //D5
    Beep(523,200); //C5
    //39
    Beep(440,400); //A4
    Beep(110,200); //A2
    Beep(164,200); //E3
    Beep(220,200); //A3
    Beep(261,200); //C4
    Beep(329,200); //E4
    Beep(440,200); //A4
    //40
    Beep(493,400); //B4
    Beep(82,200); //E2
    Beep(164,200); //E3
    Beep(207,200); //Ab3
    Beep(329,200); //E4
    Beep(415,200); //Ab4
    Beep(493,200); //B4
    //41
    Beep(523,400); //C5
    Beep(110,200); //A2
    Beep(164,200); //E3
    Beep(220,200); //A3
    Beep(329,200); //E4
    Beep(659,200); //E5
    Beep(622,200); //Eb5
    //42
    Beep(659,200); //E5
    Beep(622,200); //Eb5
    Beep(659,200); //E5
    Beep(493,200); //B4
    Beep(587,200); //D5
    Beep(523,200); //C5
    //43
    Beep(440,400); //A4
    Beep(110,200); //A2
    Beep(164,200); //E3
    Beep(220,200); //A3
    Beep(261,200); //C4
    Beep(329,200); //E4
    Beep(440,200); //A4
    //44
    Beep(493,400); //B4
    Beep(82,200); //E2
    Beep(164,200); //E3
    Beep(207,200); //Ab3
    Beep(329,200); //E4
    Beep(523,200); //C5
    Beep(493,200); //B4
    //45
    Beep(440,1000); //A4
    analogWrite(led, 0);
    analogWrite(led2, 0);
    analogWrite(led3, 0);
    analogWrite(led4, 0);
}

void loop() {
  
}

/*
  Am folosit doar functia setup deoarece nu am dorit sa repet codul la infinit. Se poate reseta de la capat folosind butonul de reset al placutei.
  Functia Beep am creat-o deoarece codul este o portare din C++.   
*/
