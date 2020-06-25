/*
 * EJERCICIO RESUELTO POR: Nilzon Vela C.
 * FECHA: 25/06/2020
 * GITHUB: https://github.com/nilzoft/
 * LINK PROBLEM: https://projecteuler.net/problem=6
 */
 
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int sumSquares(int);
int sumGauss(int);

int main() {
    int num = 100;
    int sumSquare = sumSquares(num);
    int squareSum = pow((double) sumGauss(num), 2.00);
    int difference = abs(squareSum - sumSquare);
    printf("la diferencia es: %d - %d = %d\n", squareSum, sumSquare, difference);
    return 0;
}

int sumSquares(int lim) {
    int s = 0;
    for (int i = 1;i <= lim;i++)
        s += pow((double) i, 2.00);
        
    return s;
}

int sumGauss(int n) {
    return (int) n * (n + 1) / 2;
}
