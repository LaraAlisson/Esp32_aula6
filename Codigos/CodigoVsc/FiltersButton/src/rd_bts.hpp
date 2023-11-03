/*Bibliotecas arquivo HPP*/

#include <Arduino.h>

/*Não permite que o código seja definido mais de uma véz*/
#ifndef BTS_HPP
#define BTS_HPP


/*Constantes*/
#define BTS_NUM 2

/*Clase*/
class kb_rd
{
public:
    /*construtor*/
    kb_rd(const int bt1, const int bt2);
    
    /*fUNÇÃO nescessario retornar valor*/
    unsigned   read_bt(const int btn, const int bounce);

private:
    /*Vetor recebe a quantidade de pinos*/
    int pins[BTS_NUM];
};

#endif