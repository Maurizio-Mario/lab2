#include <stdlib.h>
#include <stdio.h>
#define DIM 7
#include "es14.h"

void riempi_scacchiera(char *fen, char campo[DIM][DIM]) {
	int i, k;
	int *pk;	/*Ho provato un puntatore a k*/
	pk = &k;
	printf("\n");
	for(i = 0; i < DIM; ++i){
		for(k = 0; k < DIM; ++k){
			if(*fen >= '1' && *fen <= '8')	/*salta spazio/i in array*/
					++*pk; 
			else if(*fen == '/'){
				++fen;
				printf("\n");
			}
			campo[i][k] = *fen;
			printf("%c", campo[i][k]);
			++fen;
		}
	}
	printf("\n\n");
}


/*
void vettore_casuale(int v[], int n, int min, int max) {

}

int conta_sequenze(int n) {

}
*/
