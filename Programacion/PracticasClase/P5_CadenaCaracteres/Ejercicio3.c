#include <stdio.h>
#include <stdlib.h>
/**
 *
 * 	Autor: Samuel Carías
 *
 */

int main (){
	char str1[50];
	int cantidad;
	char str2[50];
	printf("Introduce una palabra: ");
	scanf("%s",str1);//No hace falta el & debido a que una cadena de caracteres de valores str ya tiene usignado un espacio de memoria reservado para los digitos en [] por lo que solo de llamar a la memoria str sabe lo que se ha guardado
	printf("Introduce una palabra: ");
	scanf("%s",str2);//No hace falta el & debido a que una cadena de caracteres de valores str ya tiene usignado un espacio de memoria reservado para los digitos en [] por lo que solo de llamar a la memoria str sabe lo que se ha guardado
	if (str1 == str2) {
		printf("Es la misma palabra %s y %s",str1,str2);
	}

return 0;
}

