/* =======================================================================

   CURSO ESP32: Aprenda de Verdade!
   WR Kits: https://wrkits.com.br/ | https://space.hotmart.com/wrkits 

   Exemplo de controle independente de saídas
   
   ESP-WROOM-32
   Board: DevKitV1
   Compilador: Arduino IDE 1.8.4

   Autor: Eng. Wagner Rambo
   Data:  Fevereiro de 2021

 
======================================================================= */


// =======================================================================
// --- Mapeamento de Hardware ---
#define   out1   15
#define   out2    4
#define   out3    5


// =======================================================================
// --- Constantes do Projeto ---
#define  out1_time   741
#define  out2_time   555
#define  out3_time   393


// =======================================================================
// ---Variáveis Globais ---
int   out1_time_save=0,
      out2_time_save=0,
      out3_time_save=0;


// =======================================================================
// --- Configurações Iniciais ---
void setup() 
{
  pinMode(out1, OUTPUT);
  pinMode(out2, OUTPUT);
  pinMode(out3, OUTPUT);

  digitalWrite(out1,  LOW); // 100ms
  digitalWrite(out2,  LOW); // 200ms
  digitalWrite(out3,  LOW); // 300ms

 
} //end setup


// =======================================================================
// --- Loop Infinito ---
void loop() 
{

  if(millis()-out1_time_save >= out1_time)
  {
    digitalWrite(out1, !digitalRead(out1));
    out1_time_save = millis();
    
  } //end if out1

  if(millis()-out2_time_save >= out2_time)
  {
    digitalWrite(out2, !digitalRead(out2));
    out2_time_save = millis();
    
  } //end if out2

  if(millis()-out3_time_save >= out3_time)
  {
    digitalWrite(out3, !digitalRead(out3));
    out3_time_save = millis();
    
  } //end if out1
  
  

} //end loop


// =======================================================================
//












        
/* ======================================================================= 
                                                              
                                       _                      
                                      / \                     
                                     |oo >                    
                                     _\=/_                    
                    ___         #   /  _  \   #               
                   /<> \         \\//|/.\|\\//                
                 _|_____|_        \/  \_/  \/                 
                | | === | |          |\ /|                    
                |_|  0  |_|          \_ _/                    
                 ||  0  ||           | | |                    
                 ||__*__||           | | |                    
                |* \___/ *|          []|[]                    
                /=\ /=\ /=\          | | |                    
________________[_]_[_]_[_]_________/_]_[_\______________     
                                                              
                                                              
======================================================================= */
/* --- Final do Programa --- */







