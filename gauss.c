/******************************
* Calculo Numerico
* Implementação 1
* Gauss Seidel e Gauss Jacobi
*
* Jonathan Sias
* Charles Ramires
******************************/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

//  |2x1 + 5x2 = -3
//  |3x1 + x2 = 2
//
// x1 = ((-3 - 5x2)/2)
// x2 = 2 - 3x1
// E = 0.001
// x0 = [0, 0]

void seidel(){
    float x = 0;
    float y = 0;
    float precisao = 0.001;
    int nmax = 20;
    int i = 0;
    float xanterior;
    float yanterior;
    float subx;
    float suby;
    float parada;
    while((i <= nmax) || (parada <= precisao)) {
        xanterior = x;
        yanterior = y;
        x = ((-3-(5*y))/2);
        y = (2-(3*x));
        subx = (x - xanterior);
        suby = (y - yanterior);
        if (subx > suby) {
            parada = subx;
        }else{
            parada = suby;
        }
        printf("x%d: %f, y%d: %f\n", i, x, i, y);
        i++;
    }
}

//  |2x1 + 5x2 = -3
//  |3x1 + x2 = 2
//
// x1 = ((-3 - 5x2)/2)
// x2 = 2 - 3x1
// E = 0.001
// x0 = [0, 0]

void jacobi(){
    float x = 0;
    float y = 0;
    float precisao = 0.001;
    int nmax = 20;
    int i = 0;
    float xanterior;
    float yanterior;
    float subx;
    float suby;
    float parada;
    while((i <= nmax) || (parada <= precisao)) {
        xanterior = x;
        yanterior = y;
        x = ((-3-(5*y))/2);
        y = (2-(3*xanterior));
        subx = (x - xanterior);
        suby = (y - yanterior);
        if (subx > suby) {
            parada = subx;
        }else{
            parada = suby;
        }
        printf("x%d: %f, y%d: %f\n", i, x, i, y);
        i++;
    }
}

int main () {
    printf("\n\n\nGAUSS SEIDEL\n\n");
    seidel();
    printf("\n\n\nGAUSS JACOBI\n\n");
    jacobi();
    return 0;
}
