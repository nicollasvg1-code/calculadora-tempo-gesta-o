#include <stdio.h>

int main(){
	int semana, meses;
	printf("Qual a quantidade de semanas de gestação? ");
	scanf("%d" , &semana);
	meses = semana / 4;
	printf("Tempo de gestação aproximado: %d meses", meses);
	return 0;
}
