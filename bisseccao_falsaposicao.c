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
void falsaPosicao(){
    // 1
    float a = 0;
    float b = 1;
    float fa;
    float fb;
    float x;
    float fx;
    int i = 0;
    printf("\n\nEXERCÍCIO 1:\n");
    while (i <= 3) {
        fa = ((pow(a, 3))-(9*a)+3);
        fb = ((pow(b, 3))-(9*b)+3);
        x = ((a*fb)-(b*fa))/(fb-fa);
        fx = ((pow(x, 3))-(9*x)+3);
        printf("%d a: %.8f, b: %.8f, x: %.8f, fa: %.8f, fb: %.8f, fx: %.8f\n", i, a, b, x, fa, fb, fx);
        if (fa >= 0 && fx >= 0) {
            a = x;
        }else{
            if (fb >= 0 && fx >= 0) {
                b = x;
            }else{
                if (fa < 0 && fx < 0) {
                    a = x;
                }else{
                    b = x;
                }
            }
        }
        i++;
    }
    // 2
    a = 0;
    b = 1;
    fa = 0;
    fb = 0;
    i = 0;
    printf("\n\nEXERCÍCIO 2:\n");
    while (i <= 17) {
        fa = ((exp(a))-(3*a));
        fb = ((exp(b))-(3*b));
        x = ((a*fb)-(b*fa))/(fb-fa);
        fx = ((exp(x))-(3*x));
        printf("%d a: %.8f, b: %.8f, x: %.8f, fa: %.8f, fb: %.8f, fx: %.8f\n", i, a, b, x, fa, fb, fx);
        if (fa >= 0 && fx >= 0) {
            a = x;
        }else{
            if (fb >= 0 && fx >= 0) {
                b = x;
            }else{
                if (fa < 0 && fx < 0) {
                    a = x;
                }else{
                    b = x;
                }
            }
        }
        i++;
    }
    // 3
    a = 1;
    b = 2;
    fa = 0;
    fb = 0;
    i = 0;
    printf("\n\nEXERCÍCIO 3:\n");
    while (i <= 28) {
        fa = ((exp(a))-(3*a));
        fb = ((exp(b))-(3*b));
        x = ((a*fb)-(b*fa))/(fb-fa);
        fx = ((exp(x))-(3*x));
        printf("%d a: %.8f, b: %.8f, x: %.8f, fa: %.8f, fb: %.8f, fx: %.8f\n", i, a, b, x, fa, fb, fx);
        if (fa >= 0 && fx >= 0) {
            a = x;
        }else{
            if (fb >= 0 && fx >= 0) {
                b = x;
            }else{
                if (fa < 0 && fx < 0) {
                    a = x;
                }else{
                    b = x;
                }
            }
        }
        i++;
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
void bisseccao(){
    float pontoMedio;
    int i = 0;
    float fx;
    float fa;
    float fb;
    float a;
    float b;
    // 1
    a = 0.5;
    b = 1;
    printf("\n\nEXERCÍCIO 1:\n");
    while (i <= 5) {   // criterios de parada
        fa = ((pow(a, 3))-(9*a)+5);
        fb = ((pow(b, 3))-(9*b)+5);
        pontoMedio = ((a+b)/2);
        fx = ((pow(pontoMedio, 3))-(9*pontoMedio)+5);;
        if ((fx == 0) || (pontoMedio < 0.01)) {
            printf("SOLUÇÃO ENCONTRADA: %f\n", fx);
            exit(1);
        }
        printf("%d a: %.8f, b: %.8f, x: %.8f, fa: %.8f, fb: %.8f, fx: %.8f\n", i, a, b, pontoMedio, fa, fb, fx);
        // testa se os sinais de "a" e do pontoMedio sao iguais
        // caso nao seja, testa se os sinais de "b" e do pontoMedio sao iguais
        if (fa >= 0 && fx >= 0) {
            a = pontoMedio;
        }else{
            if (fb >= 0 && fx >= 0) {
                b = pontoMedio;
            }else{
                if (fa < 0 && fx < 0) {
                    a = pontoMedio;
                }else{
                    b = pontoMedio;
                }
            }
        }
        i++;
    }
    // 2
    i = 0;
    a = 0;
    b = 1;
    printf("\n\nEXERCÍCIO 2:\n");
    while (i <= 30) {   // criterios de parada
        fa = ((exp(a))-(3*a));
        fb = ((exp(b))-(3*b));
        pontoMedio = ((a+b)/2);
        fx = ((exp(pontoMedio))-(3*pontoMedio));
        printf("%d a: %.8f, b: %.8f, x: %.8f, fa: %.8f, fb: %.8f, fx: %.8f\n", i, a, b, pontoMedio, fa, fb, fx);
        // testa se os sinais de "a" e do pontoMedio sao iguais
        // caso nao seja, testa se os sinais de "b" e do pontoMedio sao iguais
        if (fa >= 0 && fx >= 0) {
            a = pontoMedio;
        }else{
            if (fb >= 0 && fx >= 0) {
                b = pontoMedio;
            }else{
                if (fa < 0 && fx < 0) {
                    a = pontoMedio;
                }else{
                    b = pontoMedio;
                }
            }
        }
        i++;
    }
    // 3
    i = 0;
    a = 1;
    b = 2;
    printf("\n\nEXERCÍCIO 3:\n");
    while (i <= 18) {   // criterios de parada
        fa = ((exp(a))-(3*a));
        fb = ((exp(b))-(3*b));
        pontoMedio = ((a+b)/2);
        fx = ((exp(pontoMedio))-(3*pontoMedio));
        printf("%d a: %.8f, b: %.8f, x: %.8f, fa: %.8f, fb: %.8f, fx: %.8f\n", i, a, b, pontoMedio, fa, fb, fx);
        // testa se os sinais de "a" e do pontoMedio sao iguais
        // caso nao seja, testa se os sinais de "b" e do pontoMedio sao iguais
        if (fa >= 0 && fx >= 0) {
            a = pontoMedio;
        }else{
            if (fb >= 0 && fx >= 0) {
                b = pontoMedio;
            }else{
                if (fa < 0 && fx < 0) {
                    a = pontoMedio;
                }else{
                    b = pontoMedio;
                }
            }
        }
        i++;
    }
}

int main(){
    int flag = 1;
    int metodo;
    while (flag == 1) {
        printf("|            MÉTODOS            |\n");
        printf("|       1 - Falsa Posição       |\n");
        printf("|         2 - Bissecção         |\n");
        scanf("%d", &metodo);
        switch (metodo) {
            case 1:
                falsaPosicao();
            break;
            case 2:
                bisseccao();
            break;
        }
    }
    return 0;
}
