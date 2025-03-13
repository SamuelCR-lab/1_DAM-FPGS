#include <stdio.h>
#include <stdlib.h>
/**
 * 
 * 	Autor: SAMUEL CARIAS RAMOS
 *  
 */
int main(){
	int numeros[5] = {10, 20, 30, 40, 50};
	// La variable p tiene que apuntar "al final" del array de numeros 
	int *p = numeros + 5;//Es lo ideal debido a que quieres que p se inicialize en el 5 para hacerlo de forma regresiva
	// *p =  &numeros[5] no seria correcto debido a que con el '&' coge la direccion de memoria de numeros[5] que no esta dentro del array ya que es cogeria el espacio en de '6' y el valor
	// es uno cualquiera lo que podria coger un valor protegido que rompa el programa.
	for (int i = 5; i < 5; i--){
		printf("Elemento %d: %d (en la dirección %p)\n",i,*(p - i),p-i);
	}
return 0;
}
