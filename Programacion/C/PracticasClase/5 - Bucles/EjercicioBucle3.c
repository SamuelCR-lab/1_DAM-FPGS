#include <stdio.h>
#include <stdlib.h>
/**
 *
 *	Autor: Samuel Carías
 *
 */
int main (){  
	int i;
	int suma = 0;
	for (i = 1; i <= 10 ; i+=1){
		printf("%d + %d = ",suma,i);
		suma=suma+i;// este ejercicio se puede hacer tambein con el acumulado en la variable suma que es con el suma += i que es que cada ves que se repita el 
		printf("%d\n",suma);
		
	}
return 0;
}
