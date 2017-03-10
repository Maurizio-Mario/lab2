#include <stdlib.h>
#include <stdio.h>
#include "es13.h"
#define DIM 100

/*
Compilare con il comando 
`gcc -std=gnu89 -Wall -pedantic -o es13 es13.c es13_main.c`.
Aggiungere l'opzione `-ggdb` se volete utilizzare il debugger.
 */

int nr;
int p1[DIM];
int p2[DIM];
int pr[DIM];

int main() {

	somma({3, -4, 0, 1}, 3, {1, 4, 6}, 2, {0}, &nr);	

	return EXIT_SUCCESS;
}
