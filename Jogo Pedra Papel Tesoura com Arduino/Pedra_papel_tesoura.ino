#define PEDRAJ1 A0
#define PEDRAJ2 10
#define PAPELJ1 A1
#define PAPELJ2 11
#define TESOURAJ1 A2
#define TESOURAJ2 12
#define REINICIAR A3

bool pedraJog1, papelJog1, tesouraJog1;
bool PedraJog2, PapelJog2, tesouraJog2;
bool reiniciar = 0;


void setup() {
  pinMode(A0, INPUT);
  pinMode(A1, INPUT);
  pinMode(A2, INPUT);
  pinMode(A3, INPUT);
  pinMode(10, INPUT);
  pinMode(11, INPUT);
  pinMode(12, INPUT);

  pedraJog1 = papelJog1 = tesouraJog1 = 0;
  pedraJog2 = papelJog2 = tesouraJog2 = 0;
}

void loop() {

  lcd.clear();
  lcd.setCursor(2,0);
  lcd.print("Jogo Pedra, ");
  lcd.setCursor(1,1);
  lcd.print("Papel e Tesoura");

  delay(3000);
  lcd.clear();

  lcd.setCursor(3,0);
  lcd.print("Jogador 1");
  lcd.setCursor(4,1);
  lcd.print("Sua vez");

            do{
              pedraJog1 = digitalRead(PEDRAJ1);
              papelJog1 = digitalRead(PAPELJ1);
              tesouraJog1 = digitalRead(TESOURAJ1);
            }while (pedraJog1 == 0 && papelJog1 == 0 && tesouraJog1 == 0);
            
  lcd.clear();
  lcd.print("Jogador 2");
  lcd.setCursor(4,1);
  lcd.print("Sua vez");

            do{
              pedraJog2 = digitalRead(PEDRAJ2);
              papelJog2 = digitalRead(PAPELJ2);
              tesouraJog2 = digitalRead(TESOURAJ2);
            }while (pedraJog2 == 0 && papelJog2 == 0 && tesouraJog2 == 0);

  //Jogador 1 escolhe Pedra e Jogador 2 escolhe Pedra
  if
  
  

}
