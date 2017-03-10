#include <stdlib.h>
#include <stdio.h>
#include "es13.h"

/* 
 * Potete usare `coefficiente_binomiale` per implementare la funzione `potenza_binomio`.
 * Visto che una variabile di tipo `int` occupa 32 bit, si possono verificare overflow
 * per valori di `n` maggiori o uguali a 13. Nella fase di test saranno usati solo valori
 * tali per cui non si verifichino overflow.
 */
int fattoriale(int n) {
	int i, f;

	f = 1;
	for (i = 2; i <= n; i++) {
		f *= i;
	}
	return f;
}

int coefficiente_binomiale(int n, int k) {
	return fattoriale(n) / (fattoriale(k) * fattoriale(n-k));
}

/* Esercizi da implementare. */
void somma(int p1[], int n1, int p2[], int n2, int pr[], int *nr) {
        int i;
	printf("\n\nWe are going to sum a polynom of grade %d, that is\n\n", n1);
	for(i = 0; i < n1; ++i){
		printf("\t%3d", p1[i]);
	}
	printf("\n\n and a second polynome of grade %d, that is:\n\n", n2)
	for(i = 0; i < n2; ++i){
		printf("\t%3d", p2[i]);
	}
}


/*
void prodotto(int p1[], int n1, int p2[], int n2, int pr[], int *nr) {

}

void potenza_binomio(int c1, int e1, int c2, int e2, int n, int pr[], int *nr) {

}
*/
