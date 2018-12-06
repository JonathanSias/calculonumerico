/******************************
* Calculo Numerico
* Implementação 5
* Integração e Diferenciação Numérica
*
* Jonathan Sias
* Charles Ramires
******************************/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

// [-3,5]
// (4x-3)^3 dx
// erro relativo
// 5 casas decimais
void trapezio(){
    float x0 = -3;
    float xn = 5;
    // n = numero de termos
    float n = 10;
    // h = tamanho intervalo entre os termos
    // ultimo termo - primeiro termo / numero de termos
    float h = (xn - x0)/n;
    // x = guarda o primeiro termo
    float x = x0;
    float fx;
    int i;
    // variavel acumuladora de termos
    float aux = 0;
    float fxn;
    float fx0;
    printf("TRAPEZIO REPETIDO\n");
    printf("Enunciado 1:\n");
    for(i = 0; i < 11; i++){
        // função
        fx = (pow(((4*x)-3),3));
        // pega primeiro valor da fx
        if (i == 0) {
            fx0 = fx;
        }
        // pega ultimo valor da fx
        if (i == 10) {
            fxn = fx;
        }
        // soma valores da fx entre o primeiro e ultimo termo
        if ((i > 0) && (i < 10)) {
            aux = (aux+(2*fx));
        }
        // soma o termo atual com o intervalo
        x = (x + h);
    }
    float rtrapezio;
    rtrapezio = (h/2*(fx0+aux+fxn));
    printf("1) Trapezio: %f\n", rtrapezio);
    // erro trapezio
    float etr;
    etr = ((-n*(pow(h,3)))/12);
    printf("1) Erro Trapezio: %f\n", etr);
}

void simpson(){
    // 1/3
    printf("1/3 SIMPSON\n");
    printf("Enunciado 1:\n");
    // 3/8
    printf("3/8 SIMPSON\n");
    printf("Enunciado 1:\n");
}

void euler(){
    //
}

void rungekutta(){
    //
}

int main(){
    trapezio();
    return 0;
}