#include <stdio.h>
#include <stdlib.h>
/**
 *
 *	Autor: Samuel Carías
 *
 */
int main (){ 
	int num = 0;
	int resto = 0; 
	int resultado = 0;
	int suma = 0;
	printf("Introduce un número cualquiera: ");
	scanf(" %d",&num);
	while (num != 0){//Para que funcionara el while teniamos que decirle que guardara en resultado el dividendo, al igual que el resto se convirtieran en el nuevo numero que hasta que no haga la ultima operacion con el 1 no sera 0 por ello num debe de ser !=   	
		resultado = num % 10;
		resto = num/10;
		printf("%d\n",resultado);
		num = resto;
		suma += resultado;//En esta funcion significa que la suma += significa que se realiza una suma del numero que esta en resultado y se guarda en suma hasta que acaba el bucle y se muestra en suma

	}
	printf("La suma de cada uno de los digitos es = %d\n",suma);
return 0;
}
