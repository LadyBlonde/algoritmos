//Dado um número inteiro, construa um algoritmo que imprima “par” ou “ímpar”, se o número for par ou ímpar, respectivamente. (use a função RESTO(EAx,EAy).

#include <stdio.h>

int resto(int a, int b)
{
	int resto;
	resto = a % b;
	return resto;
}

int main(int argc, char const *argv[])
{
	int a, b, parimpar;
	printf("Digite dois valores\n");
	scanf("%d %d", &a, &b);
	parimpar = resto(a,b);
	if(parimpar % 2 == 0)
	{
		printf("E par\n");
	}
	else 
	{
		printf("E impar\n");
	}
	return 0;
}
