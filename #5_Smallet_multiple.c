/* 
 * EJERCICIO RESUELTO POR: Nilzon Vela C. 
 * FECHA: 30/05/2020 
 * GITHUB: https://github.com/nilzoft/ 
 * LINK PROBLEM: https://projecteuler.net/problem=5
 */

#include <stdio.h>

#define LEN_ARR 20

typedef unsigned long int big;

big multiploMenor(int*, int);

int main() {
    int arr[LEN_ARR] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    
    printf("El multiplo menor de 1 2 3...19 20 es %lu\n", multiploMenor(arr, LEN_ARR));
    return 0;
}

big multiploMenor(int* arrNums, int len) {
    big factorMult = 1;
    int numPrimo = 2,
        ok = 1, okMult;
    while (ok) {
        okMult = 0;
        ok = 0;
        for (int i = 0; i < len;i++) {
            if (arrNums[i] % numPrimo == 0 && arrNums[i] != 1) {
                okMult = 1;
                arrNums[i] /= numPrimo;
            }
            
            if (arrNums[i] != 1)
                ok = 1;
        }
        if (okMult)
            factorMult *= numPrimo;
        else
            numPrimo++;
    }
    
    return factorMult;
}
