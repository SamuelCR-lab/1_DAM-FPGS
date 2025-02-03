#include <stdio.h>
#include <stdlib.h>

int modificar_elemento(int valor);
int modificar_por_referencia(int * valor);
int main(){
	int n, comprobacion, m;
	int * arr;
	int * arr2;
		printf("Introduzca un numero entero positivo: ");
		comprobacion = scanf("%d",&n);
		if (comprobacion == 1 && n >= 0){
			arr = (int*) malloc(n*sizeof(int));
				if(arr == NULL) return 1;
			printf("Introduce los valores con los que quieres rellenar el array:\n");
			for (int i = 0; i < n; ++i){
				comprobacion = scanf(" %d",&m);
				if (comprobacion == 1 && m>= 0){
					arr[i]= m;
				}else{
					printf("ERROR, has introducido un valor que no es un numero entero positivo.\n");
					return 0;
				}
			}
			modificar_elemento(arr[n-1]);
			printf("Valor del ultimo elemento del array, despúes de ser modificado por valor: %d\n",arr[n-1]);
			printf("Este deberia de ser el valor del ultimo elemento del array, despúes de modificado por valor: %d\n",modificar_elemento(arr[n-1]));
			modificar_por_referencia(&arr[n-1]);
			printf("Valor del ultimo elemento del array, despúes de ser modificado por referencia: %d\n",arr[n-1]);
			free(arr);
			arr2 = (int*) malloc(n*sizeof(double));
			printf("%d\n",*arr2);
						free(arr2);
		}else {
			printf("ERROR, has introducido un valor que no es un numero entero positivo.\n");
		}
return 0;
}

int modificar_elemento(int valor){
	valor = valor + 20;
	return valor;
}
int modificar_por_referencia(int * valor){
	*valor = *valor -10;
	return *valor;
}

/*

Preguntas (2p):

1) Explica lo que pasa.
	Creamos un programa que le solicita a un usuario que que introduzca un número positivo y de ese numero creamos un array que contenga esa cantidad de números, si esto no es asi se imprimira un mensaje de error, reservamos la memoria de ese número, le pedimos que introduzca los valores con los que quiere rellenar el array. Por ultimo y lo importante es que modificamos el valor del ultimo número del array de dos maneras, por valor y por referencia. Por valor se modifica el número que se guarda en la ultima posicion de nuestro array por lo que si se hace una modificacion dentro de la funcion y devuelve al main un valor modificado con el return valor pero no modifica el valor dentro del array sin que lo igualemos para que se guarde en el. Por referencia al pasarle la direccion de memoria donde guardamos nuestro ultimo valor en la funcion podemos acceder a el y modificarlo directamente y que se guarde la modificacion en el array.
2) Cada elemento de tipo double ocupa 8 bytes, como se veria haciendo este printf("%ld\n",sizeof(double));, por ello el valor de un array de n elementos double se puede calcular con este codigo: 
	arr2 = (int*) malloc(n*sizeof(double));
			printf("%ld\n",sizeof(arr2));
						free(arr2);
	Se utiliza el ld porque el sizeof es un tipo de variable que solicita leerse con un ld porque es los bytes que ocupa la lectura de la longitud del valor osea un long int

*/