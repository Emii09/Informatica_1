#include <stdio.h>

int main()
{
	float peso, estatura, imc;
	
	printf("--- Calculadora de Indice De Masa Corporal ---");
	printf("\n");
	
	printf("\nEscriba su peso en kg: ");
	scanf ("%f", &peso);
	if (peso<=0){
		while (peso<=0){
			printf("Por favor, ingrese un valor valido.");
			printf("\nEscriba su peso en kg: ");
			scanf ("%f", &peso);
			printf("\n");
		}
	}
	
	printf ("Bien!, ahora escriba su estatura en metros: ");
	scanf ("%f", &estatura);
	if (estatura<=0){
		while (estatura<=0){
			printf("Por favor, ingrese un valor valido.");
			printf("\nEscriba su estatura en metros: ");
			scanf ("%f", &estatura);
			printf("\n");
		}
	}
	
	imc = peso/(estatura*estatura);
	printf("\nSu Indice de Masa Corporal es: %.2f\n ", imc);
	printf("\nGuiese por la siguiente tabla.");
	printf( "\n<18.5 | Peso Bajo."); 
	printf("\n>= 18.5 y <= 24.9 | Normal.");
	printf("\n>25 y <= 29.9 | Sobrepeso. ");
	printf("\n>= 30 | Obesidad.");
	
	return 0;
}

