#include <stdlib.h>
#include <stdio.h>
#include "es13.h"
#define DIM 100

/*
 Compilare con il comando 
`gcc -std=gnu89 -Wall -pedantic -o es13 es13.c es13_main.c`
 Aggiungere l'opzione `-ggdb` se volete utilizzare il debugger.
 */

int maxGrad(int, int);

int maxGrad(int x, int y){		//Find the biggets grade
	if(x > y)
		return x;
	else
		return y;
}

int main() {				
	int p1[DIM] = {3, -4, 0, 2};	//Global and static variables are
	int n1 = 3;			//initialized to 0.
	int p2[DIM] = {1, 4, 6};
	int n2 = 2;
	int pr[DIM]; 
	int *nr;
        int i, grad = 0, sum = 0;
	int max = maxGrad(n1, n2);	//Call function to check highest grade
	
	//First polynomial
        printf("\n\n>We are going to sum a polynom of grade %d, that is\n\n\t", n1);
        for(i = 0; i <= n1; ++i){
		if(p1[n1 - i] > 0)
                        printf("+");
                printf("%dx^%d ", p1[n1 - i], n1 - i);
	}
	//Second polynomial
        printf("\n\n>and a second polynome of grade %d, that is:\n\n\t", n2);
        for(i = 0; i <= n2; ++i){
	        if(p2[n2 - i] > 0)
                        printf("+");
                printf("%dx^%d ", p2[n2  - i], n2 - i);
        }
	printf("\n\n");

	nr = &grad;			//pointer to the base of the result array
	for(i = 0 ; i <= max; ++i){	//Sum coefficients*/
		pr[i] = p1[i] + p2[i];
		sum += pr[i];		//Check for null polynomial*/
	}
	if(sum == 0){			//If the polynomial is null
		*nr = -1;
		printf(">The result is a null polynomial. Grade is %d.", *nr);
	}
	else{					//Valid polynomial
		for(i = 0; i <= max; ++i){	//Check maximum valid grade
			if(pr[max - i] != 0){
				*nr = i;
				break;
			}

		}
		printf(">The sum of the two polynomials has grade %d and is equal to:\n\n\t", *nr);
		for(i = 0; i <= (max); ++i){
			if(pr[max - i] != 0){			//Print only coefficient != 0
		                if(pr[max - i] > 0)		//If positive printf "+". Only for beauty
		                        printf("+");
	        	        printf("%dx^%d ", pr[max - 1  - i], max - 1 - i);
     			}
	   	}
	}
	printf("\n\n");
}
