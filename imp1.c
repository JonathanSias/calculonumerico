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
void falsaPosicao(float a, float b, int p){
    // criterios de parada
    // 1 - f(xk) < E
    // 2 - |xk - xk-1| < E
    // 3 - numero limite de iteraçoes
    //float k0 = a;
    //float k1 = b;
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
void bisseccao(){
    float pontoMedio;
    int i = 1;
    float fx;
    float fa;
    float fb;
    float aux;
    // 1
    float a = 0.5;
    float b = 1;
    printf("\n\nEXERCÍCIO 1:\n");
    while (i <= 5) {   // criterios de parada
        fa = ((pow(a, 3))-(9*a)+5);
        fb = ((pow(b, 3))-(9*b)+5);
        pontoMedio = ((a+b)/2);
        aux = pow(pontoMedio, 3);
        fx = ((aux)-(9*pontoMedio)+5);
        /*if ((fx == 0) || (pontoMedio < p)) {
            // retorna pontoMedio
        }*/
        printf("%d a: %f, b: %f, x: %f\n", i, a, b, pontoMedio);
        // testa se os sinais de "a" e do pontoMedio sao iguais
        // caso nao seja, testa se os sinais de "b" e do pontoMedio sao iguais
        if (fx < 0) {
            b = pontoMedio;
        }else{
            a = pontoMedio;
        }
        i++;
    }
    printf("\n\nEXERCÍCIO 2:\n");
    ////////////////////////////////////////////////////////////////////////////
    aux = 0;
    i = 1;
    a = 0;
    b = 1;
    // 2
    while (i <= 30) {   // até chegar as 30 iterações
        fa = ((exp(a))-(3*a));
        fb = ((exp(b))-(3*b));
        pontoMedio = ((a+b)/2);
        aux = exp(pontoMedio);
        fx = ((aux)-(3*pontoMedio));
        /*if ((fx == 0) || (pontoMedio < p)) {
            // retorna pontoMedio
        }*/
        printf("%d a: %f, b: %f, x: %f\n", i, a, b, pontoMedio);
        // testa se os sinais de "a" e do pontoMedio sao iguais
        // caso nao seja, testa se os sinais de "b" e do pontoMedio sao iguais
        if (fx < 0) {
            b = pontoMedio;
        }else{
            a = pontoMedio;
        }
        i++;
    }
    printf("\n\nEXERCÍCIO 3:\n");
    ////////////////////////////////////////////////////////////////////////////
    aux = 0;
    i = 1;
    a = 1;
    b = 2;
    //3
    while (i <= 18) {   // até chegar as 18 iterações
        fa = ((exp(a))-(3-a));
        fb = ((exp(b))-(3-b));
        pontoMedio = pontoMedio = ((a+b)/2);
        aux = exp(pontoMedio);
        fx = ((aux)-(3*pontoMedio));
        /*if ((pontoMedio == 0) || (pontoMedio < p)) {
            //printf("%f\n", pontoMedio);
        }*/
        //i++;
        printf("%d a: %f, b: %f, x: %f\n", i, a, b, pontoMedio);
        // testa se os sinais de "a" e do pontoMedio sao iguais
        // caso nao seja, testa se os sinais de "b" e do pontoMedio sao iguais
        if (fx < 0) {
            a = pontoMedio;
        }else{
            b = pontoMedio;
        }
        i++;
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
                //falsaPosicao();
            break;
            case 2:
                bisseccao();
            break;
        }
    }
    return 0;
}
