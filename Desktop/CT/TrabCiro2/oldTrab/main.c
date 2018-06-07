// BRUNO MARCOS SANTOS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "estatistica.h"

int main(int argc, char *argv[])
{
	int k = 0;
	int i = 0;
	int j = 0;
	double mn = 0; // media
	double dp = 0; // desvio padrao
	int fim = 0; // quant valores fora dos padroes
	char nome[10][41] = {};


		scanf("%d", &k);


			// loop que recebera os nomes
		for(i = 0; i < k; i++)
		{
			scanf(" %41[^\n]", nome[i] );
		}

			// calcula media dos nomes
		printf("%.4lf\n", media_nomes(k, nome) );

		mn = media_nomes(k, nome);


			// calcula o desvio padrao dos nomes
		printf("%.4lf\n", desvio_padrao(k, nome, mn) );

		dp = desvio_padrao(k, nome, mn);


			// calcula a quant de nomes fora dos padroes
		fim = fora_desvio(k, nome, mn, dp);

		printf("%d\n", fim);

	return 0;
}