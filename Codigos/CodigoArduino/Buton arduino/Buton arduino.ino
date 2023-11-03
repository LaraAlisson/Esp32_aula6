/* MAPEAMENTO DE HARDWARE*/

#define     bt1     18
#define     bt2     19
#define     out1    2
#define     out2    4
#define     out3    5


/*Protótipo das Funções*/
void reade_keyb();


/*Configrações iniciais*/

void setup() {
  pinMode(bt1, INPUT_PULLUP);
  pinMode(bt2, INPUT_PULLUP);
  pinMode(out1, OUTPUT);
  pinMode(out2, OUTPUT);
  pinMode(out3, OUTPUT);

  digitalWrite(out1, LOW);
  digitalWrite(out2, LOW);
  digitalWrite(out3, LOW);


}

void loop() {

  reade_keyb();

}

/*Desenvolvimento das funções*/

void reade_keyb()
{
  /*Teste de entrada digital para sistema sensores ou botões em NPN*/
  static char flag1 = 0, 
              flag2 = 0;

  if(!digitalRead(bt1)) flag1 = 1;

  if(digitalRead(bt1) && flag1)
  {
    flag1 = 0;
    //inverete a ultima estado da saída
    digitalWrite(out1, !digitalRead(out1));
     //filtro para não ocorrer efeito dublo
   // delay(130);
  }

  if(!digitalRead(bt2)) flag2 = 1;
  if(digitalRead(bt2) && flag2)
  {
    flag2 = 0;
    //inverete a ultima estado da saída
    digitalWrite(out2, !digitalRead(out2));
    //filtro para não ocorrer efeito dublo
   // delay(130);
  }

}
























