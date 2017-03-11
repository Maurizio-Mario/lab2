#include <stdlib.h>
#include <stdio.h>
#include "es13.h"
#define DIM 100;

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

/*11111111111111111111111111111111111111111111111111111111111*/

int maxGrad(int, int);

int maxGrad(int x, int y){             /*Find the biggets grade*/
        if(x > y)
                return x;
        else
                return y;
}


void somma(int p1[], int n1, int p2[], int n2, int pr[], int *nr) {

        int i, grad = 0, sum = 0;
        int max = maxGrad(n1, n2);      /*Call function to check highest grade*/
	nr = &grad;
	/*First polynomial*/
        printf("\n\n>We are going to sum a polynomial of grade %d, that is\n\n\t", n1);
        for(i = 0; i <= n1; ++i){
                if(p1[n1 - i] > 0)
                        printf("+");
                printf("%dx^%d ", p1[n1 - i], n1 - i);
        }
	/*Second polynomial*/
        printf("\n\n>and a second polynomial of grade %d, that is:\n\n\t", n2);
        for(i = 0; i <= n2; ++i){
                if(p2[n2 - i] > 0)
                        printf("+");
                printf("%dx^%d ", p2[n2  - i], n2 - i);
        }
        printf("\n\n");
        for(i = 0 ; i <= max; ++i){     /*Sum coefficients*/
                pr[i] = p1[i] + p2[i];
                sum += pr[i];           /*Check for null polynomial*/
        }
	if(sum == 0){                   /*If the polynomial is null*/
                *nr = -1;
                printf(">The result is a null polynomial. Grade is %d.", *nr);
        }
        else{                                   /*Valid polynomial*/
                for(i = max; i >= 0; --i){      /*Check maximum valid grade*/
                        if(pr[i] != 0){
                                *nr = i;
                                break;
                        }
		}
                printf(">The sum of the two polynomials has grade %d and is equal to:\n\n\t", *nr);
                for(i = 0; i <= (max); ++i){
                        if(pr[max - i] != 0){                   /*Print only coeff*/
                                if(pr[max - i] > 0)             /*If positive prin$*/
                                        printf("+");
                                printf("%dx^%d ", pr[max - i], max - i);
                        }
                }
        }
        printf("\n\n");
}

/*22222222222222222222222222222222222222222222222222222222222*/

void prodotto(int p1[], int n1, int p2[], int n2, int pr[], int *nr) {

        int i, j, grad = 0;
        nr = &grad;

        printf("\n\n>#We are going to multiply a polynomial of grade %d, that is\n\n\t", n1);
        for(i = 0; i <= n1; ++i){
                if(p1[n1 - i] > 0)
                        printf("+");
                printf("%dx^%d ", p1[n1 - i], n1 - i);
	}

        printf("\n\n>#and a second polynomial of grade %d, that is:\n\n\t", n2);
        for(i = 0; i <= n2; ++i){
                if(p2[n2 - i] > 0)
                        printf("+");
                printf("%dx^%d ", p2[n2  - i], n2 - i);
	}
	for(i = 0; i <= n1; i++){		/*Calculation of result*/
		for(j = 0; j <= n2; j++){
			pr[i + j] += p1[i] * p2[j];
		}
	}
        for(i = n1 * n2; i >= 0; --i){      /*Check maximum valid grade*/
                if(pr[i] != 0){
                        *nr = i;
                         break;
		}
	}
	if(p1 == 0 || p2 == 0){
		*nr = -1;
		printf("\n\n#Meaningless multiplication. Grade %d.\n\n", *nr);
	}
	printf("\n\n#The product of the two polynomial has grade %d,\n"
		"and correspond to:\n\n\t", *nr); /*sistema*/
	for(i = n1 + n2; i >= 0; --i){
                if(pr[i] >= 0)
                        printf("+");
		printf("%dx^%d ", pr[i], i);
	}
	printf("\n\n");
}

/*
void potenza_binomio(int c1, int e1, int c2, int e2, int n, int pr[], int *nr) {
}
*/
