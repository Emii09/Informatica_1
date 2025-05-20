#include <stdio.h>

int main()
{
	int peso ;
	float estatura, imc;
	
	printf("--- Calculadora de Indice De Masa Corporal ---");
	
	printf("\nEscriba su peso en kg: ");
	scanf ("%d", &peso);
	
	printf ("Bien!, ahora escriba su estatura en metros: ");
	scanf ("%f", &estatura);
	
	imc = peso/ (estatura*estatura);
	
	printf("\nSu Indice de Masa Corporal es: %.2f\n ", imc);
	if (imc<18.5)
		printf("\nSu peso es bajo");
	else if (imc>=18.5 && imc<=24.9)
		printf("\nSu peso es normal");
	else if (imc>25 && imc<29.9)
		printf("\nUsted tiene sobrepeso");
	else if (imc>=30)
		printf("\nUsted padece de obesidad");
	
	return 0;
}

