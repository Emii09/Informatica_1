#include <stdio.h>

int main()
{
	float peso, estatura, imc;
	
	printf("--- Calculadora de Indice De Masa Corporal ---");
	printf("\nEscriba su peso en kg: ");
	scanf ("%f", &peso);
	printf ("Bien!, ahora escriba su estatura en metros: ");
	scanf ("%f", &estatura);
	imc = peso/(estatura*estatura);
	printf("\nSu Indice de Masa Corporal es: %.2f\n ", imc);
	printf("\nGuiese por la siguiente tabla.");
	printf( "\n<18.5 | Peso Bajo."); 
	printf("\n>= 18.5 y <= 24.9 | Normal.");
	printf("\n>25 y <= 29.9 | Sobrepeso. ");
	printf("\n>= 30 | Obesidad.");
	
	return 0;
}

