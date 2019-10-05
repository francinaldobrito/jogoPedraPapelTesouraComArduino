#include <Wire.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27,2,1,0,4,5,6,7,3, POSITIVE);

#define PEDRAJ1 A0
#define PEDRAJ2 A3 
#define PAPELJ1 A1
#define PAPELJ2 A4
#define TESOURAJ1 A2
#define TESOURAJ2 A5
#define REINICIAR A8

bool pedraJog1, papelJog1, tesouraJog1;
bool pedraJog2, papelJog2, tesouraJog2;
bool reiniciar = 0;


void setup() {
  
    pinMode(A0, INPUT_PULLUP);
    pinMode(A1, INPUT_PULLUP);
    pinMode(A2, INPUT_PULLUP);
    pinMode(A3, INPUT_PULLUP);
    pinMode(A4, INPUT_PULLUP);
    pinMode(A5, INPUT_PULLUP);
    pinMode(A8, INPUT_PULLUP);
    
    lcd.begin (20,4);
  
    pedraJog1 = papelJog1 = tesouraJog1 = 1;
    pedraJog2 = papelJog2 = tesouraJog2 = 1;
}

void loop() {

  lcd.clear();
  lcd.setCursor(5,0);
  lcd.print("JOGO PEDRA,");
  lcd.setCursor(3,1);
  lcd.print("PAPEL E TESOURA");
  lcd.setCursor(1,3);
  lcd.print("by Naldo & Renildo");
  
  delay(5000);
  lcd.clear();
  
  lcd.setCursor(0,0);
  lcd.print("********************"); 
  lcd.setCursor(0,1);
  lcd.print("*    JOGADOR  1    *");
  lcd.setCursor(0,2);
  lcd.print("*     SUA  VEZ     *");
  lcd.setCursor(0,3);
  lcd.print("********************");

    do {
      pedraJog1 = digitalRead(PEDRAJ1);
      papelJog1 = digitalRead(PAPELJ1);
      tesouraJog1 = digitalRead(TESOURAJ1);
    }while((pedraJog1 == 1) && (papelJog1 == 1) && (tesouraJog1 == 1));

  lcd.clear();
  lcd.setCursor(1,0);
  lcd.print("JOGADOR  1 FEZ SUA");
  lcd.setCursor(0,1);
  lcd.print("ESCOLHA E ESTA SENDO");
  lcd.setCursor(2,2);
  lcd.print("ARMAZENADA EM UMA");
  lcd.setCursor(2,3);
  lcd.print("VARIAVEL INTERNA");

  delay(6000);
  lcd.clear();
  
  lcd.setCursor(0,0);
  lcd.print("********************"); 
  lcd.setCursor(0,1);
  lcd.print("*    JOGADOR  2    *");
  lcd.setCursor(0,2);
  lcd.print("*     SUA  VEZ     *");
  lcd.setCursor(0,3);
  lcd.print("********************");

    do{
      pedraJog2 = digitalRead(PEDRAJ2);
      papelJog2 = digitalRead(PAPELJ2);
      tesouraJog2 = digitalRead(TESOURAJ2);
    }while((pedraJog2 == 1) && (papelJog2 == 1) && (tesouraJog2 == 1));
  
  lcd.clear();
  
  lcd.setCursor(1,0);
  lcd.print("JOGADOR  2 FEZ SUA");
  lcd.setCursor(0,1);
  lcd.print("ESCOLHA E ESTA SENDO");
  lcd.setCursor(2,2);
  lcd.print("ARMAZENADA EM UMA");
  lcd.setCursor(2,3);
  lcd.print("VARIAVEL INTERNA");

  delay(6000);
  lcd.clear();

  //Jogador 1 escolhe Pedra e Jogador 2 escolhe Pedra
  if ((pedraJog1 == 0) && (pedraJog2 == 0)){

    lcd.setCursor(0,0);
    lcd.print("*  VERIFICANDO AS  *");
    lcd.setCursor(0,1);
    lcd.print("*   JOGADAS E AS   *");
    lcd.setCursor(0,2);
    lcd.print("*    COMPARANDO    *");
    lcd.setCursor(0,3);
    lcd.print("*   VENCEDOR E :   *");

    delay(4000);
    lcd.clear();

    lcd.setCursor(0,0);
    lcd.print("********************");
    lcd.setCursor(0,1);
    lcd.print("* JOGADOR 1 PEDRA. *");
    lcd.setCursor(0,2);
    lcd.print("* JOGADOR 2 PEDRA. *");
    lcd.setCursor(0,3);
    lcd.print("********************");

    delay(4000);
    lcd.clear();

    lcd.setCursor(0,0);
    lcd.print("********************");
    lcd.setCursor(0,1);
    lcd.print("*     PARTIDA      *");
    lcd.setCursor(0,2);
    lcd.print("*    EMPATADA !    *");
    lcd.setCursor(0,3);
    lcd.print("********************");
    
    delay(4000);
  }
  //Jogador 1 escolhe Pedra e Jogador 2 escolhe Papel
  if ((pedraJog1 == 0) && (papelJog2 == 0)){

    
    lcd.setCursor(0,0);
    lcd.print("*  VERIFICANDO AS  *");
    lcd.setCursor(0,1);
    lcd.print("*   JOGADAS E AS   *");
    lcd.setCursor(0,2);
    lcd.print("*    COMPARANDO    *");
    lcd.setCursor(0,3);
    lcd.print("*   VENCEDOR E :   *");

    delay(4000);
    lcd.clear();
    
    lcd.setCursor(2,0);
    lcd.print("JOGOGADOR 1 - PEDRA");
    lcd.setCursor(0,1);
    lcd.print("********************"); 
    lcd.setCursor(2,2);
    lcd.print("JOGADOR 2 - PAPEL");
    
    delay(4000);
    lcd.clear();
    
    lcd.setCursor(3,0);
    lcd.print("JOGADOR 2");
    lcd.setCursor(4,1);
    lcd.print("VENCEU !");
    
    delay(4000);
  }

//Jogador 1 escolhe Pedra e Jogador 2 escolhe Tesoura
if ((pedraJog1 == 0) && (tesouraJog2 == 0)){
lcd.setCursor(1,0);
lcd.print("JOGADOR 1 - PEDRA");
lcd.setCursor(0,1);
lcd.print("********************"); 
lcd.setCursor(1,2);
lcd.print("JOGADOR 2 - TESOURA");

delay(2000);
lcd.clear();

lcd.setCursor(3,0);
lcd.print("Jogador 1");
lcd.setCursor(4,1);
lcd.print("Venceu !");

delay(2000);
}
if ((papelJog1 == 0) && (papelJog2 == 0)){
lcd.setCursor(2,1);
lcd.print("Jog 1 - Papel");
lcd.setCursor(2,1);
lcd.print("Jog 2 - Papel");
delay(2000);
lcd.clear();
lcd.setCursor(3,0);
lcd.print("Partida");
lcd.setCursor(4,1);
lcd.print("Empatada !");
delay(2000);
}

if ((papelJog1 == 0) && (pedraJog2 == 0)){
lcd.setCursor(2,0);
lcd.print("Jog 1 - Papel");
lcd.setCursor(2,1);
lcd.print("Jog 2 - Pedra");
delay(2000);
lcd.clear();
lcd.setCursor(3,0);
lcd.print("Jogador 1");
lcd.setCursor(4,1);
lcd.print("Venceu !");
delay(2000);
}


if ((papelJog1 == 0) && (tesouraJog2 == 0)){
lcd.setCursor(2,0);
lcd.print("Jog 1 - Papel");
lcd.setCursor(2,1);
lcd.print("Jog 2 - Tesoura");
delay(2000);
lcd.clear();
lcd.setCursor(3,0);
lcd.print("Jogador 2");
lcd.setCursor(4,1);
lcd.print("Venceu !");
delay(2000);
}

if ((tesouraJog1 == 0) && (tesouraJog2 == 0)){
lcd.setCursor(2,0);
lcd.print("Jog 1 - Tesoura");
lcd.setCursor(2,1);
lcd.print("Jog 2 - Tesoura");
delay(2000);
lcd.clear();
lcd.setCursor(3,0);
lcd.print("Partida");
lcd.setCursor(4,1);
lcd.print("Empatada !");
delay(2000);
}

if ((tesouraJog1 == 0) && (papelJog2 == 0)){
lcd.setCursor(2,0);
lcd.print("Jog 1 - Tesoura");
lcd.setCursor(2,1);
lcd.print("Jog 2 - Papel");
delay(2000);
lcd.clear();
lcd.setCursor(3,0);
lcd.print("Jogador 1");
lcd.setCursor(4,1);
lcd.print("Venceu !");
delay(2000);
}


if ((tesouraJog1 == 0) && (pedraJog2 == 0)){
lcd.setCursor(2,0);
lcd.print("Jog 1 - Tesoura");
lcd.setCursor(2,1);
lcd.print("Jog 2 - Pedra");
delay(2000);
lcd.clear();
lcd.setCursor(3,0);
lcd.print("Jogador 2");
lcd.setCursor(4,1);
lcd.print("Venceu !");
delay(2000);
}

delay(3000);
lcd.clear();

lcd.setCursor(0,0);
lcd.print("********************");
lcd.setCursor(0,1);
lcd.print("*    RECOMECE O    *");
lcd.setCursor(0,2);
lcd.print("*      JOGO !      *");
lcd.setCursor(0,3);
lcd.print("********************");

do{
reiniciar = digitalRead(REINICIAR);
}while (reiniciar == 1);

pedraJog1 = papelJog1 = tesouraJog1 = 1;
pedraJog2 = papelJog2 = tesouraJog2 = 1;
lcd.clear();//limpa a tela do LCD

}
           
            
