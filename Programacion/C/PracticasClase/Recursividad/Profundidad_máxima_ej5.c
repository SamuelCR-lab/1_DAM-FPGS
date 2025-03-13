 #include <stdio.h>
#include <stdlib.h>

int Profundidad(char * cadena, int balance);

int main(){
	char cadena[200];
	printf("Introduce una cadena de parentesis y te contare cuantos has anidado sin cerrar: ");
	scanf(" %s",cadena);
	printf("La Profundidad maxima de la %s es = %d\n",cadena, Profundidad(cadena, 0));
}
int Profundidad(char * cadena, int balance){
	static int profundidad_maxima =0;
	if (*cadena == '\0'){
		return profundidad_maxima;
	}
	profundidad_maxima = profundidad_maxima < balance ? balance : profundidad_maxima;
	if(*cadena == '('){
		return Profundidad(cadena+1,balance+1);
	}else if(*cadena == ')'){
		if (balance == 0 ){
			return Profundidad(cadena+1,balance);
		}else{
			return Profundidad(cadena+1,balance-1);
		}
	}else{
		return Profundidad(cadena+1,balance);
	}

}
