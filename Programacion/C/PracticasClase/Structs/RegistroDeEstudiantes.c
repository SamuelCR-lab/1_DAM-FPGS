#include <stdio.h>
#include <stdlib.h>
/**
 *
 *	Autor: SAMUEL CARIAS RAMOS
 *
 */

struct Estudiante {
	char nombre[50];
	int edad;
	float promedio;
}

int main (){
	printf("Introduce el nombre del alumno: ");
	scanf("%c\n",Estudiante.nombre);
	printf("Introduce la edad del estudiante: ");
	scanf("%d\n",Estudiante.edad);
	printf("Introduce el promedio del estudiante: ");
	scanf("%f\n",Estudiante.promedio);
	printf("El nombre del alumno es = %f",Estudiante.nombre);
	printf("La edad del alumno es = %f",Estudiante.edad);
	printf("El promedio del alumno es = %f",Estudiante.promedio);
	return 0;
}
