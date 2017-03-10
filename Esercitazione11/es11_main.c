#include <stdlib.h>
#include <stdio.h>
#include "es11.h"

/*
 * Compilare con il comando `gcc -std=gnu89 -Wall -o es11 es11.c es11_main.c`.
 * Aggiungere l'opzione `-ggdb` se volete utilizzare il debugger.
 */
int main() {
	/* In questo esempio le stringhe hanno al massimo dimensione 9 + terminatore, ma
	 * le vostre implementazioni devono funzionare con stringhe di dimensione arbitraria. */
	char s1[10], s2[10];
	int idx;

	printf("--- Esercizio 1 ---\n");
	printf("Inserisci una stringa: ");
	scanf("%9s", s1);
	if (palindroma(s1)) {
		printf("La stringa inserita e' palindroma.\n");
	} else {
		printf("La stringa inserita non e' palindroma.\n");
	}
	printf("\n");

	printf("--- Esercizio 2 ---\n");
	printf("Inserisci una stringa: ");
	scanf("%9s", s1);
	printf("Inserisci una stringa da cercare nella precedente: ");
	scanf("%9s", s2);
	idx = sottostringa(s1, s2);
	if (idx == -1) {
		printf("La stringa \"%s\" non e' presente in \"%s\".\n", s2, s1);
	} else {
		printf("La stringa \"%s\" e' presente in \"%s\" in posizione %d.\n", s2, s1, idx);
	}
	printf("\n");

	printf("--- Esercizio 3 ---\n");
	printf("Inserisci un numero esadecimale: ");
	scanf("%9s", s1);
	printf("Il numero %s corrisponde a %d in base 10.\n", s1, hex2int(s1));

	return EXIT_SUCCESS;
}
