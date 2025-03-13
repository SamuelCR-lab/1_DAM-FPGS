#include <stdio.h>
#include <stdlib.h>
/**
 *
 * 	Autor: Samuel Carías
 *
 */

int main (){
	char str1[100];
	char str2[100];
	printf("Introduce una palabra: ");
	scanf("%s",str1);//No hace falta el & debido a que una cadena de caracteres de valores str ya tiene usignado un espacio de memoria reservado para los digitos en [] por lo que solo de llamar a la memoria str sabe lo que se ha guardado
	scanf("%s",str2);
	printf("%s%s\n",str1,str2);

return 0;
}

