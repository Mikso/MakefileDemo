// BRUNO MARCOS SANTOS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "estatistica.h"


double media_nomes(int k, char nome[][41])
{
	int somatorio = 0;
	// f = float --> fsomatorio --> fk
	double fsomatorio;
	double fk;
	double f;
	int i = 0;

			// somo a quant de letras de cada nome em uma variavel
		for (int i = 0; i < k; i++)
		{
			somatorio = somatorio + strlen(nome[i]);
		}
			
			// transformo um o valor que as variaveis fsomatorio, fk recebem em double
		fsomatorio = (double) somatorio;
		fk = (double) k;
			
				// calculo a media total_letras/quant_nomes
			f = (fsomatorio / fk);

	return f;
}



double desvio_padrao(int k, char nome[][41], double mn) // k = N , mn = media
{
	int i = 0;
	double desvio = 0;
	double soma = 0;

		for (int i = 0; i < k; ++i)
		{

				// calculo o somatorio total e depois a raiz quadrada
			soma = soma + pow(mn - strlen(nome[i]), 2)  ;
			desvio = sqrt(soma/k);
			
		}


	return desvio;
}



int fora_desvio(int k, char nome[][41], double mn, double dp) // k = N , mn = media, dp = desvio padrao
{

	int i = 0;
	int cont = 0; // contador de valores fora dos padroes
	int soma = 0;

		for (int i = 0; i < k; ++i)
		{
			soma = strlen(nome[i]);

			if ( (soma > (mn + dp)) || (soma < (mn - dp)) )
			{
				cont++;
			}

		}


	return cont;
}
