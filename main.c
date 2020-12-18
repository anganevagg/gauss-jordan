#include <stdio.h>

int main(){
	int i, j, k, n;

	float A[20][20], c, x[10];

	printf("Ingresa el valor de n: ");
	scanf("%d", &n);
	
	printf("Ingresa el valor del indice de la matriz:\n");
	for (i = 0; i < n; i++){
		for (j = 0; j < (n + 1); j++){
			printf(" A[%d][%d]:", i, j);
			scanf("%f", &A[i][j]);
		}
	}

	for (i = 0; i < n; i++){
		for (j = 0; j < (n + 1); j++){
			printf("%f \t", A[i][j]);
		}
		printf("\n");
	}

	printf("Procedimiento\n");
	for (j = 0; j < n; j++){
		for (i = 0; i < n; i++){
			if (i != j){
				c = A[i][j] / A[j][j];
				for (k = 0; k < n + 1; k++){
					A[i][k] = A[i][k] - c * A[j][k];
					printf("A[%d][%d]: %f \t", i, k, A[i][k]);
				}
				printf("\n");
			}
		}
	}
	
	printf("\nSolución:\n");
	for (i = 0; i < n; i++){
		x[i] = A[i][n] / A[i][i];
		printf("\n x%d = %f \n", i, x[i]);
	}
	return (0);
}