#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * 
 * 	Autor: SAMUEL CARIAS RAMOS
 *
 *
 *  	Como funcionan los punteros con structs
 *
 *
 *///Definimos constantes
#define MAX_NOMBRE 20
#define MAX_ESTUDIANTES 20

typedef struct{
	char nombre[MAX_NOMBRE];
	int edad;
	float nota;
}Estudiante;

/*
 * Estudiante * inicializar(char * nombre, int edad, float nota){
 * 	Creo una variable llamada estudiante_nuevo
 * 	Estudiante * estudiante_nuevo;
 * 	//Inicializo	
 * 	return estudiante_nuevo;
 *
 */


/**Es valida pero todavia no sabemos utilizarla.
 
  Estudiante * inicializar(char * nombre, int edad, float nota){
	//No puedo rellenar los datos dea estudainte_nuevo porque no he reservado la memoria para ello
	Estudiante * estudiante_nuevo = malloc;//Memoria Dinámica
	
	//Inicializo	
	return estudiante_nuevo;
	}
*/

void inicializar(Estudiante * estudiante_a_rellenar, char * nombre, int edad, float nota){
	//Esto no compila: estudiante_a_rellenar.edad = edad; porque estudiante_a_rellenar
	//es un puntero, no un estudiante. Habría que hacer (*estudiante_a_rellenar).edad, es decir,
	//acceder al contenido del puntero para poder asi acceder al campo "edad" del Estudiantes.
	//En lugar de hacer eso, lo que C permite es utilizar el operador "->".

	estudiante_a_rellenar->edad = edad;
	estudiante_a_rellenar->nota = nota;

	//estudiante_a_rellenar.nombre = nombre no funciona porque cuando se le da el valor a 
	//char * nombre es el valor de referencia a la primera direccion de memoria de nombre 
	//que dispone de 20 huecos de 1 byte por el MAX_NOMBRE, esta memori de donde se localizan
	// los char (que un char es un array) dentro del struct Estudiante 
	// (que es declarado como array por listado [MAX_ESTUDIANTES])
	// dentro de la direccion de memoria que le hemos asignado a cada estudiante.

	strcpy(estudiante_a_rellenar->nombre,nombre);

}


int main(){
	Estudiante listado[MAX_ESTUDIANTES];// Aqui se reserva la memoria para estudiantes. Los 560 bytes se reservan aqui
	int num_estudiantes;
	int edad;
	float nota;
	char nombre[MAX_NOMBRE];
	
	printf("%p\n",listado);	
	printf("Sizeof listado %lu\n",sizeof(listado));//Este resultado es la multiplicacion de listado que es igual al numero de estudiantes que es 20 por el tamaño del struct que es 28	
	printf("Sizeof struct estudiante%lu\n",sizeof(Estudiante));//El Tamaño del struct es 28 debido a que tiene un int que equivale a 4 float a 4 y el char 20
	
	printf("¿Cuántos estudiantes desea inicialiazar?: ");
	scanf("%d",&num_estudiantes);

	for (int i = 0; i < num_estudiantes; i++
		printf("Introduce la edad: ");
		scanf("%d",&edad);
		printf("Introduce la nota: ");
		scanf("%f",&nota);
		printf("Introduce el nombre: ");
		scanf("%s",nombre);
		inicializar(listado + i,nombre,edad,nota); 


return 0;
}
