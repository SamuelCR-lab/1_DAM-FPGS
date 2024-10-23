#include <stdio.h>
#include <stdlib.h>
/**
 *
 * 	Autor: Samuel Carías
 *
 */

int main (){
	char str1[20];
	int cantidad;
	char str2[20];
	printf("Introduce una palabra: ");
	scanf(" %s",str1);//No hace falta el & debido a que una cadena de caracteres de valores str ya tiene usignado un espacio de memoria reservado para los digitos en [] por lo que solo de llamar a la memoria str sabe lo que se ha guardado
	printf("Introduce una palabra: ");
	scanf(" %s",str2);
	if (str1 = str2){
		printf("%s y %s son la misma palabra\n",str1,str2);
	}else{
		printf("%s y %s No son la misma palabra\n",str1,str2);
	}
	if (str1 > str2){
		printf("La cadena 1 %s es mayor que la cadena 2 %s.\n",str1,str2);
	}else if (str1 < str2){
		printf("La cadena 2 %s es mayor que la cadena 1 %s.\n",str2,str1);

	}else{
		printf("%s y %s son la misma palabra\n",str1,str2);
	}


return 0;
}

