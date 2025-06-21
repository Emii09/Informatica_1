#include <stdio.h>

// Link del repositorio : https://github.com/Emii09/Informatica_1
// NOTA: En rama "main" se encuentra el codigo con la consgina del TP5

int main() {
	
	int estudiantes;
	int nota = 0;
	int nota_final = 0;
	int num_nota = 1;
	int cant_notas = 0;
	int calif_alta = 0;
	int calif_baja = 100;
	float promedio;
	
	printf("Ingrese el numero de estudiantes a calificar: ");
	scanf("%d",&estudiantes);
	
	while(estudiantes <= 0){
			printf("--ERROR-- Ingrese un numero correcto de estudiantes.\n");
			
			printf("\n");
			
			printf("Ingrese el numero de estudiantes a calificar: ");
			scanf("%d",&estudiantes);
		
		}
	
	printf("Ingrese las calificaciones de los estudiantes, en un rango de 0-100\n");
	
	while (cant_notas < estudiantes){
		
		printf("Calificacion n°%d:", num_nota);
		scanf("%d",&nota);
		
			while (nota < 0 || nota > 100){
			printf("\n--ERROR-- Ingrese una calificacion valida.\n");
			printf("\n");
			printf("Calificacion n°%d:", num_nota);
			scanf("%d",&nota);
			}
			
			if (nota > calif_alta)
				calif_alta = nota;
			
			if (nota < calif_baja)
				calif_baja = nota;
			
		nota_final += nota;
		num_nota +=1;
		cant_notas += 1;
		
		} 
		promedio = (float) nota_final / estudiantes;
	
		printf("\nLa calificacion mas alta es de %d", calif_alta);
		printf("\nLa calificacion mas baja es de %d", calif_baja);
		printf("\nEl promedio de las calificaciones es de %.2f", promedio);
		
	return 0;
}

