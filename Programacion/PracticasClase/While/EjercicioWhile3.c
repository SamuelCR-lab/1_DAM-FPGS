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
	printf("Introduce un número cualquiera: ");
	scanf(" %d",&num);
	while (num != 0){//Para que funcionara el while teniamos que decirle que guardara en resultado el dividendo, al igual que el resto se convirtieran en el nuevo numero que hasta que no haga la ultima operacion con el 1 no sera 0 por ello num debe de ser !=   	
		resultado = num % 10;
		resto = num/10;
		printf("%d",resultado);
		num = resto;
	}
	printf("\n");
return 0;
}
