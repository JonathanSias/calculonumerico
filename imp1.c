/******************************
* Calculo Numerico
* Implementação 1
* Falsa Posição & Bissecção
*
* Jonathan Sias
* Charles Ramires
******************************/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

// FALSA POSIÇAO
// f(x) = (x^3)-(9x+3)  |
// [0, 1]               | 1
// precisao = 0,0005    |
//
// f(x) = (e^x)-(3x)    |
// [0, 1]               | 2
// iteraçoes = 17       |
//
// f(x) = (e^x)-(3x)    |
// [1, 2]               | 3
// iteraçoes = 28       |
//
void falsaPosicao(float a, float b, int p, int ni){
    // criterios de parada
    // 1 - f(xk) < E
    // 2 - |xk - xk-1| < E
    // 3 - numero limite de iteraçoes
    float k0 = a;
    float k1 = b;
    while (/* condition */) {
        /* code */
    }
}

// BISSECÇAO
// f(x) = (x^3)-(9x+5)  |
// [0.5, 1]             | 1
// precisao = 0,01      |
//
// f(x) = (e^x)-(3x)    |
// [0, 1]               | 2
// iteracoes = 30       |
//
// f(x) = (e^x)-(3x)    |
// [1, 2]               | 3
// iteracoes = 18       |
void bisseccao(float a, float b, float p, int ni){
    float pontoMedio;
    int i = 1;
    float fx;
    // 1
    while ((i <= ni) || ( < p)) {   // criterios de parada
        pontoMedio = ((a+b)/2);
        fx = ((pontoMedio^3)-((9*pontoMedio)+5));
        i++;
        // printar iteraçao, valor a, valor b, ponto medio, fx
    }
    i = 1;
    // 2
    while (i <= ni) {   // até chegar as 30 iterações
        pontoMedio = ((a+b)/2);
        fx = ((^pontoMedio)-(3*pontoMedio));
        i++;
        // printar iteraçao, valor a, valor b, ponto medio, fx
    }
    i = 1;
    while (i <= ni) {   // até chegar as 18 iterações
        pontoMedio = pontoMedio = ((a+b)/2);
        fx = ((^pontoMedio)-(3*pontoMedio));
        i++;
        // printar iteraçao, valor a, valor b, ponto medio, fx
    }
}

int main(){
    float x0;   // primeiro ponto do intervalo
    float x1;   // segundo ponto do intervalo
    int precisao;
    int iteracoes;
    int flag = 1;
    int metodo;
    while (flag == 1) {
        printf("|            MÉTODOS            |\n");
        printf("|       1 - Falsa Posição       |\n");
        printf("|         2 - Bissecção         |\n");
        scanf("%d", &metodo);
        switch (metodo) {
            case 1:
                scanf("%f\n", &x0);
                scanf("%f\n", &x1);
                scanf("%d\n", &precisao);
                //scanf("%d\n", &iteracoes);
                //falsaPosicao(x0, x1, precisao);
            break;
            case 2:
                scanf("%f\n", &x0);
                scanf("%f\n", &x1);
                scanf("%d\n", &precisao);
                //scanf("%d\n", &iteracoes);
                //bisseccao(x0, x1, precisao);
            break;
        }
    }
    return 0;
}
