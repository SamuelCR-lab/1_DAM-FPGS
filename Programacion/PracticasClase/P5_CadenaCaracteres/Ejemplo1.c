#include <stdio.h>
#include <stdlib.h>
/**
 *
 * 	Autor: Samuel Carías
 *
 */

int main (){
	char str1[5] = "hola";//Se pone cuatro en la cadena porque son la cantidad de espacio asignado para los valores aunque comienzan por el 0 a asignar los digitos
	printf("%s\n",str1);
	printf("%c\n",str1[3]);//debido a lo antes expresado el caracter 3 es la 'a'
	printf("%d\n",str1[5]);//En una Cadena de caracteres siempre hay que reservarle la posibilidad de almacenar un espcio de memoria mas porque se el /0 tambien es un caracter que hay que reservar que cierra las lineas  
	str1[5] = '$';
	printf("%s\n",str1);
return 0;
}

