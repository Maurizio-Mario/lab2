#include <stdlib.h>
#include <stdio.h>
#include "es13.h"
#define DIM 100

/*
Compilare con il comando 
`gcc -std=gnu89 -Wall -pedantic -o es13 es13.c es13_main.c`.
Aggiungere l'opzione `-ggdb` se volete utilizzare il debugger.
 */


int main() {
	int nr;
	int n1 = 3;
	int n2 = 2;
	int pr[DIM] = {0};
	int p1[DIM] = {3, -4, 0, 2};
	int p2[DIM] = {0};
	int c1 = 3; int e1 = 2;
	int c2 = 1; int e2 = 0; int n = 2;
	somma(p1, n1, p2, n2, pr, &nr);
	prodotto(p1, n1, p2, n2, pr, &nr);
	potenza_binomio(c1, e1, c2, e2, n, pr, &nr);
	return EXIT_SUCCESS;
}

