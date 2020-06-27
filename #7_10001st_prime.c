/*
 * EJERCICIO RESUELTO POR: Nilzon Vela C.
 * FECHA: 27/06/2020
 * GITHUB: https://github.com/nilzoft/
 * LINK PROBLEM: https://projecteuler.net/problem=7
 */
 
#include <stdio.h>
#include <math.h>

typedef unsigned long int big;

int primo(big);
big primoN(int);

int main(int* argc, int* argv[]) {
	int p = 10001;
	printf("El primo numero %d es: %lu\n", p, primoN(p));
	return 0;
}

big primoN(int num) {
    if (num == 1) return 2;
	int count = 1;
	big numPrimo = 1;

	while (1) {
	    numPrimo += 2;
		if (primo(numPrimo)) count++;

		if (count == num) return numPrimo;
	}
}

int primo(big num) {
	if (num == 2) return 1;
	if (num <= 1 || num % 2 == 0) return 0;
	for (big i = 3;i <= sqrt(num);i += 2) {
		if (num % i == 0) return 0;
	}

	return 1;
}

