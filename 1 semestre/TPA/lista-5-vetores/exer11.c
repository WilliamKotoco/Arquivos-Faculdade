/*
a ler um vetor com 500 posi��es e, em seguida, permitir que o
usu�rioescolha algumas opera��es:
Apresentar elementos em ordem crescente
Apresentar elementos em ordem decrescente
Imprimir todo o vetor
Imprimir as posi��es de um intervalo especificado pelo usu�rio
Digite <s> ou <S> para encerrar
*/
#include<stdio.h>
#include<stdlib.h>
#define posicoes 4 // o certo eh 500 mas to so testando
int main(){
	int i, vetor[max];
	for (i=0;i<max;i++){
		vetor[i] = rand() % 500;
			}
	return 0;
}
