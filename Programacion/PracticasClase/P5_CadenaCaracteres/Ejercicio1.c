#include <stdio.h>
#include <stdlib.h>
/**
 *
 * 	Autor: Samuel Carías
 *
 */

int main (){
	char str1[100];
	int posicion;
	char str2;
	printf("Introduce una palabra: ");
	scanf("%s",str1);//No hace falta el & debido a que una cadena de caracteres de valores str ya tiene usignado un espacio de memoria reservado para los digitos en [] por lo que solo de llamar a la memoria str sabe lo que se ha guardado
	printf("¿Que posicion quieres modificar?: ");
	scanf("%d",&posicion);
	printf("Introduce el caracter que deseas poner ");
	scanf(" %c",&str2);
	str1[posicion] = str2;
	printf("La nueva palabra es :%s\n",str1);

return 0;
}

