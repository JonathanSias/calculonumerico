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
    printf("1) Trapezio: %.5f\n", rtrapezio);
    // erro trapezio
    float etr;
    etr = ((-n*(pow(h,3)))/12);
    printf("1) Erro Trapezio: %.5f\n", etr);
}

void simpson(){
    // 1/3
    float x0 = -3;
    float xn = 5;
    float n = 10;
    float h = (xn - x0)/n;
    float x = x0;
    float aux = 0;
    float fx0 = 0;
    float fxn = 0;
    float impares = 0;
    float pares = 0;
    float fx;
    int i;
    printf("\n1/3 SIMPSON\n");
    printf("Enunciado 1:\n");
    for(i = 0; i < 10; i++) {
        fx = (pow(((4*x)-3),3));
        if (i == 0) {
            fx0 = fx;
        }
        if (i == 9) {
            fxn = fx;
        }
        if ((i%2) == 0) {
            pares = (pares + (2*fx));
        }
        if ((i%2) != 0) {
            impares = (impares + (4*fx));
        }
        x = (x + h);
    }
    float termos;
    termos = (impares+pares);
    float tercosimpson;
    tercosimpson = (h/3*(fx0+termos+fxn));
    printf("1) 1/3 Simpson: %.5f\n", tercosimpson);
    float erroutsimpson;
    //erroutsimpson = ((pow((xn-x0),5))/(180*(pow(h,4))));
    erroutsimpson = (((pow(h,4))*(xn-x0))/180);
    printf("1) Erro 1/3 Simpson: %.5f\n", erroutsimpson);
    //
    //
    // 3/8
    x0 = -3;
    xn = 5;
    n = 10;
    h = (xn - x0)/n;
    x = x0;
    // acumulador x2
    float acumulador2 = 0;
    // acumulador x3
    float acumulador3 = 0;

    float acumulador4 = 0;
    int j;
    i = 0;
    printf("\n3/8 SIMPSON\n");
    printf("Enunciado 1:\n");
    /*
    printf("x0: %f\n", x0);
    printf("xn: %f\n", xn);
    printf("n: %f\n", n);
    printf("h: %f\n", h);
    printf("x: %f\n", x);
    */
    float fx1, fx2, fx4, fx5, fx7, fx8;
    for(j = 0; j < 11; j++){
        fx = (pow(((4*x)-3),3));
        //printf("%f\n", fx);
        if (j == 0) {
            fx0 = fx;
        }
        if (j == 10) {
            fxn = fx;
        }
        if ((j == 3) || (j == 6) || (j == 9)) {
            acumulador2 = (acumulador2+(2*fx));
        }
        if (j == 1) {
            fx1 = fx;
        }
        if (j == 2) {
            fx2 = fx;
        }
        if (j == 4) {
            fx4 = fx;
        }
        if (j == 5) {
            fx5 = fx;
        }
        if (j == 7) {
            fx7 = fx;
        }
        if (j == 8) {
            fx8 = fx;
        }
        x = (x + h);
    }
    //printf("x2: %f\n", acumulador2);
    acumulador3 = ((3*(fx1+fx2)) + (3*(fx4+fx5)) + (3*(fx7+fx8)));
    //printf("x3: %f\n", acumulador3);
    aux = (acumulador2 + acumulador3);
    //printf("aux: %f\n", aux);
    float oitavosimpson;
    oitavosimpson = ((0.375*h)*(fx0+aux+fxn));
    printf("1) 3/8 Simpson: %.5f\n", oitavosimpson);
    float errotosimpson;
    errotosimpson = (((pow(h,5))*(xn-x0))/80);
    printf("1) Erro 3/8 Simpson: %.5f\n", errotosimpson);
}

void euler(){
    //
}

void rungekutta(){
    //
}

void enunciado3(){
    // exercicio 5
    // a)
    // [0, 5] <-> intervalo 1
    // fx = (F(x)*cos(O(x)))
    // x    |   0   |   2.5   |   5   |   10   |   15   |   20   |   30
    // F(x) |  0.0  |   7.0   |  9.0  |  14.0  |  10.5  |  12.0  |  5.0
    // O(x) |  0.5  |   0.9   |  1.4  |   9.0  |   1.3  |  1.48  |  1.5
    // [5, 30] <-> intervalo 2
    float x0 = 0;
    float x3 = 5;
    float xn = 30;
    float n1 = 3;
    float n2 = 5;
    float h1;
    float h2;
    //float x = x0;
    //float y = x3;
    float fx;
    float fx0;
    //float fx3;
    float fxn;
    float termo1;
    float termo2;
    float termo3;
    float termo4;
    printf("\n1/3 SIMPSON\n");
    printf("ENUNCIADO 3:\n");
    fx0 = ((0.0)*(cos(0.5)));
    termo2 = (4*((7.0)*(cos(0.9))));
    fxn = ((9.0)*(cos(1.4)));
    float simpson;
    float h;
    h = (x3 - x0)/n1;
    simpson = (h/3*(fx0+termo2+fxn));
    // intervalo 2
    fx0 = ((9.0)*(cos(1.4)));
    termo2 = (4*((14.0)*(cos(9.0))));
    termo3 = (2*((10.5)*(cos(1.3))));
    termo4 = (4*((12.0)*(cos(1.48))));
    fxn = ((5.0)*(cos(1.5)));
    float sum;
    sum = (termo2+termo3+termo4);
    h = (xn - x3)/n2;
    //printf("valor anterior: %.5f\n", simpson);
    simpson = simpson+(0.27*(fx0+sum+fxn));
    // erro
    float errosimpson;
    //errosimpson = (((pow(h,4))*(xn-x0))/180);
    printf("R: %.5f\n", simpson);
}

int main(){
    trapezio();
    simpson();
    enunciado3();
    return 0;
}
