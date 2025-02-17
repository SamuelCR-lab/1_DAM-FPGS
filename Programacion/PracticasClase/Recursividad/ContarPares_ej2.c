#include <stdio.h>
#include <stdlib.h>

int digitos_pares(int numero);

int main(){
	int numero, errores;
	int contador = 0;

	printf("Escribe un número entero: ");
	errores = scanf(" %d",&numero);
	if (errores == 0){
		printf("Error, introduce un número\n");
		return 1;
	}else{
		contador += digitos_pares(numero);
	}
	printf("El número %d tiene %d números pares\n",numero,contador);
	return 0;
}
int digitos_pares(int numero){
	int par_a_encontrar = numero % 10;
		if (numero <= 0){
			return 0;
		}
		int resto = numero/10;
		if (par_a_encontrar % 2 == 0 && par_a_encontrar != 0){
			return 1 + digitos_pares(resto);
		}else{
			return digitos_pares(resto);
		}		
}

