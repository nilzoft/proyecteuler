/*
 * EJERCICIO RESUELTO POR: Nilzon Vela C.
 * FECHA: 20/05/2020
 * GITHUB: https://github.com/nilzoft/
 * LINK PROBLEM: https://projecteuler.net/problem=3
 */
 
#include <stdio.h>

typedef unsigned long int big;

big factorPrimo(big);

int main() {
    big num = 600851475143;
    printf("El factor primo mas grade de = %lu es = %lu\n", num, factorPrimo(num));
    return 0;
}

big factorPrimo(big num) {
    big alt = 2,
	factor = alt;    
    while (alt <= num) {
    	if (num % alt == 0) {
     	     num /= alt;
	     factor = alt;
	}
	alt++;
    }
    return factor;
}
