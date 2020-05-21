/*
 * EJERCICIO RESUELTO POR: Nilzon Vela C.
 * FECHA: 19/05/2020
 * GITHUB: https://github.com/nilzoft/
 * LINK PROBLEM: https://projecteuler.net/problem=2
 */

#include <stdio.h>

int sum_fibonacci();

int main() {
    printf("%u", sum_fibonacci());
    return 0;
}

int sum_fibonacci() {
    unsigned int sum = 0,
                 A, B, C;
    A = 1;
    B = 2;
    C = A + B;
    sum = 2;
    
    while (C <= 4000000) {
        if (C % 2 == 0)
            sum += C;
        A = B;
        B = C;
        C = A + B;
    }
    return sum;
}
