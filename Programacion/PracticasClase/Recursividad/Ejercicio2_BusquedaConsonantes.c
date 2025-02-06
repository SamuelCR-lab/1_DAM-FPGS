#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int consonantes(char * palabra, int letras, int cantidad);

int main (){
	char cadena[100];
	int caracteres,contador;
	printf("Escribe una palabra y buscare cuantas consonantes tiene: ");
	scanf(" %s",cadena);
	caracteres = strlen(cadena);
	contador = consonantes(&cadena[0], caracteres-1,0);
	printf("%s tiene %d consonantes\n",cadena,contador);
	return 0;
}
int consonantes(char * palabra, int letras, int cantidad){
	if (palabra[letras] !='A' && palabra[letras] !='a' && palabra[letras] !='E' &&palabra[letras] !='e' && palabra[letras] !='I'&& palabra[letras] !='i'&& palabra[letras] !='O'&& palabra[letras] !='o'&& palabra[letras] !='U'&& palabra[letras] !='u'){
		 cantidad++;
	}
	
	if (letras == 0){
		return cantidad;
	}else{
		return consonantes(&palabra[0], letras-1, cantidad);
	}
}