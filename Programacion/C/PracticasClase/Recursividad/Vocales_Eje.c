#include <stdio.h>
#include <stdlib.h>

char vocales(char cadena);

int main(){
	char cadena[20]; 
	int errores;
	printf("Introduce una cadena que de caracteres para sacar todas las vocales: ");
	scanf("[%s]",cadena);
	vocales(cadena);

return 0;
}
void vocales(char * cadena){
	if(*cadena == '\0'){
		return;
	}
	char letra = 
	if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u' || letra == 'A' || letra == 'E' ||letra == 'I' ||letra == 'O' ||letra == 'U')
		printf("%c",*palabra);
	
	vocales(palabra+1);

}