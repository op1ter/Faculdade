#include <stdio.h>
#include <time.h>
#define TAM 3
#include <cstdlib>
#include <ctime>
#include <string.h>

int main(){
	int i, j, z=0, aux=0;
	int mat[TAM][TAM];
	int vet[TAM * TAM];
	srand(time(0));
	
	//preenchendo a matriz com números aleatorios e imprime ao mesmo tempo
	for(i=0; i<TAM; i++){
		for(j=0; j<TAM; j++){
			mat[i][j] = rand()%50;
			printf("\t [%d]", mat[i][j]);
		}
		printf("\n");
	}
	
	//passa matriz para um vetor
	for(i=0; i<TAM; i++){
		for(j=0; j<TAM; j++){
			vet[z] = mat[i][j];
			z++;
		}
	}
	
	//imprime o vetor
	printf("\n\n");
	for(z=0; z<TAM*TAM; z++){
		printf("\n %d", vet[z]);
		printf("\n");
	}

	//ordena o vetor
	for(i=0; i<TAM*TAM; i++){
		for(j=0; j<TAM*TAM; j++){
			if(vet[j] > vet[i]){
			aux = vet[i];
			vet[i] = vet[j];
			vet[j] = aux;
			}
		}
	}

	// Imprime o vetor ordenado
    printf("\n\n O vetor ordenado fica:");
    for(i=0; i<TAM*TAM; i++){
        printf(" %d", vet[i]);
    }
    printf("\n");
	
	
	return 0;
}