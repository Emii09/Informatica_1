// Link del repositorio : https://github.com/Emii09/Informatica_1 || El tp6 se encuentra en la rama "tp6" 
#include <stdio.h>
#include <math.h>
#define PI 3.14159265358979323846

int calcularAreaRectangulo (int ,int );
int calcularPerimetroRectangulo (int , int );
float calcularDiagonalRectangulo (int , int );
float calcularAreaCirculo (int );
float calcularPerimetroCirculo (int );
void imprimirResultado1 (int , int , float );
void imprimirResultado2 ( float , float );

int main() {
	
	int opcion;
	int longitud;
	int altura;
	int radio;
	
	printf("Seleccione la figura que desea calcular.\n");
	printf("1 - Rectángulo.\n");
	printf("2 - Círculo.\n");
	printf("Opcion seleccionada: ");
	scanf("%d", &opcion);
	
	switch(opcion){
		case 1 :
			printf("Ingrese la longitud del rectangulo: ");
			scanf("%d",&longitud);
			printf("Ahora ingrese la altura: ");
			scanf("%d",&altura);
			
			int n1 = calcularAreaRectangulo (longitud,altura);
			int n2 = calcularPerimetroRectangulo (longitud,altura);
			float n3 = calcularDiagonalRectangulo (longitud,altura);
			
			imprimirResultado1 (n1 ,n2 ,n3 );
			
			break;
			
		case 2:
			printf("Ingrese el radio del circulo: ");
			scanf("%d",&radio);
			
			float n4 = calcularAreaCirculo (radio);
			float n5 = calcularPerimetroCirculo(radio);
			
			imprimirResultado2 (n4 ,n5);
			
			break;
			
		default:
			printf("\nOpcion invalida");
			break;		
	}

	return 0;
}

int calcularAreaRectangulo (int longitud, int altura){

	int area = longitud * altura;
	
	return area;
}
	
int calcularPerimetroRectangulo (int longitud, int altura){
	
	int perimetro = 2 * (longitud + altura);
	
	return perimetro;
}

float calcularDiagonalRectangulo (int longitud, int altura){
	
	double d = (longitud*longitud) + (altura*altura);
	float diagonal = sqrt(d);
	
	return diagonal;
}
	
float calcularAreaCirculo (int radio){
	
	float area = PI * (radio*radio);
	
	return area;
	
}

float calcularPerimetroCirculo (int radio){
	
	float perimetro = 2 * PI * radio;
	
	return perimetro;
}

void imprimirResultado1 (int area, int perimetro, float diagonal){
	printf("El area del rectangulo es: %d\n", area);
	printf("El perimetro del rectangulo es: %d\n",perimetro);
	printf("La diagonal del rectangulo es: %.2f\n",diagonal);
}
	
void imprimirResultado2 ( float area, float perimetro){
	printf("El area del circulo es: %.2f\n",area);
	printf("El perimetro del circulo es: %.2f\n",perimetro);
}
