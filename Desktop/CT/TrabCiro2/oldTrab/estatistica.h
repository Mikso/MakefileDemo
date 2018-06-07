// BRUNO MARCOS SANTOS

#ifndef _ESTATISTICA_H
#define _ESTATISTICA_H


/* devolve a média aritmética dos comprimentos dos nomes de um
 vetor de strings, dados a quantidade de nomes e os nomes */
double media_nomes(int, char [][41]);


/* devolve o desvio padrão do comprimento dos nomes de um vetor
* strings em relação a média dos comprimentos dos nomes, dados a
* quantidade de nomes, os nomes e a média do comprimento dos nomes */
double desvio_padrao(int, char [][41], double);



/* devolve quantos nomes de um vetor de strings estão fora
* do desvio padrão, dados a quantidade de nomes, os nomes, a média
* do comprimento dos nomes e o desvio padrão */
int fora_desvio(int, char [][41], double, double);


#endif