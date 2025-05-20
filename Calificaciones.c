#include <stdio.h>

int main() {
	
	int nota;
	
	printf("Ingrese la calificacion obtenida en el examen: ");
	scanf("%d",&nota);
	
	if(nota>=90)
		printf ("\nCalificacion A");
	 else 
		 if (nota>=80 && nota<90)
			printf("\nCalificacion B");
	 else 
		 if (nota>=70 && nota<80)
			printf("\nCalificacion C");
	 else 
		 if (nota>=60 && nota<70)
			printf("\nCalificacion D");
	else
		if (nota<60)
			printf("\nCalificacion F");
			

	return 0;
}

