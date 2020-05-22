/*
 * EJERCICIO RESUELTO POR: Nilzon Vela C.
 * FECHA: 21/05/2020
 * GITHUB: https://github.com/nilzoft/
 * LINK PROBLEM: https://projecteuler.net/problem=4
 */

#include <stdio.h>
#include <math.h>
int rotateNum(int);
int palindromoBig();
int main() {
    printf("El palindromo es: %d", palindromoBig());
    return 0;
}
int rotateNum(int num) {
    int lenNum = (int) log10(num),
        newNum = 0, 
        res;
    while (num > 0) {
        res = num % 10;
        newNum += res * pow(10, lenNum);
        num /= 10;
        lenNum--;
    }
    return newNum;
}
int palindromoBig() {
        int numOne = 999, 
            numTwo = 999,
            numAux = numTwo,
            mult, 
            maxPalindromo = 0;
        while (numOne > 99) {
            while (numAux > 99) {
                mult = numOne * numAux;
                if (mult == rotateNum(mult)){
                    // max palindromo
                    maxPalindromo = mult > maxPalindromo ? mult : maxPalindromo;
                --numAux;
            }
            numAux = --numTwo;
            --numOne;
        }
    return maxPalindromo;
}
