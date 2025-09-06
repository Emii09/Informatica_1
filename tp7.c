//Link del repositorio https://github.com/Emii09/Informatica_1 || El tp 7 se encuentra en la rama "tp7"
#include <stdio.h>
#define TAM 3

void cargar_productos (int );

int codigos [TAM];
float precios [TAM];

int main() {
	
	printf("Bienvenido al almacen.\n");
	printf("---------------------------------------------------\n\n");
	
	printf("Ingrese el codigo de barra de los productos.\n");
	cargar_productos (TAM);
	
	
	printf("\n\n");
	printf("TABLA DE PRODUCTOS\n\n");
	printf("\t\t\tCodigo\t\t\t");
	printf("Precio\n\n");
	
	int num_pro = 1;
	
	for (int i = 0; i < TAM; i++){
		
		printf("Producto n°%d:\t\t",num_pro);
		printf("%d\t\t\t",codigos[i]);
		printf("$%.2f\n\n",precios[i]);
		
		num_pro++;
	}
	
	float preciomax = precios[0];
	int codmax = codigos[0];
	float preciomin = precios[0];
	int codmin = codigos[0];
	
	for(int i = 0 ; i < TAM; i++){
		
		
		if(precios[i] < preciomin){
			preciomin = precios[i];
			codmin = codigos[i];
		}
		
		if(precios[i] > preciomax ){
			preciomax = precios[i];
			codmax = codigos [i];
		}
		
	}
	
	printf("\n\nEl producto mas barato es [%d ] $%.2f\n\n",codmin, preciomin);
	printf("El producto mas caro es [%d] $%.2f\n\n",codmax, preciomax);
	
	
	return 0;
}

void cargar_productos (int tam){
	
	printf("Tenga en cuenta que solo se admiten valores entre 1 - 999999999.\n\n");
	printf("Y por cuestiones logicas, para el precio solo se admiten valores mayores a 0.\n");
	printf("No obstante, se aceptan decimales\n\n");
	
	int num_pro = 1;
	
	for (int i = 0; i < tam; i++){
		printf("Producto n°%d\n",num_pro);
		printf("Codigo: ");
		scanf("%d",&codigos[i]);
		
		while( codigos[i] < 1 || codigos[i]>999999999){
			printf("\nRespete los parametros.\n");
			printf("Producto n°%d\n",num_pro);
			printf("Codigo: ");
			scanf("%d",&codigos[i]);
		}
		
		printf("Precio: ");
		scanf("%f",&precios[i]);
		
		while(precios[i] <= 0){
			printf("\nIngrese un valor mayor a 0\n");
			printf("Producto n°%d\n",num_pro);
			printf("Codigo: %d\n",codigos[i]);
			printf("Precio: ");
			scanf("%f",&precios[i]);
		}
		printf("\n");
		num_pro++;
	}
	
}

