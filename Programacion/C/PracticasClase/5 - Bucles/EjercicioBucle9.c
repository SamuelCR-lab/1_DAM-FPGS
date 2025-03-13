#include <stdio.h>
#include <stdlib.h>
/**
 *
 *	Autor: Samuel Carías
 *	Los 10 numeros de Fibonacci son 0 1 1 2 3 5 8 13 21 34 55 109...
 */
int main (){  
	int  i, resultado, anterior = 1, anterior_del_anterior = 0;//Para resalizar esta seguidilla de números se declara un punto de inicio de las variables como anterior_del_anterior y el anterior debido que la serie de fibonacci es la suma de los dos anteriores numeros.  
		printf("Serie de Fibonacci: \n");
		for (i = 1; i <= 10; i++){
			printf("%d y %d : ",anterior_del_anterior,anterior);
			resultado = anterior + anterior_del_anterior;// realizas la operacion con una 3era variable que almacene la suma.
			anterior_del_anterior = anterior;//Luego para que el bucle funcione con la logica de la serie de fibonacci, la variable el anterior_del_anterior tiene que cambiar de vslor y le asignamos el valor de anterior.
			anterior = resultado;// Posteriormente se realiza lo mismo con anterior pero en este caso el anterior es la suma del anterior y del anterior_del_anterior, haciendo que se cumpla la serie de fibonacci
			printf("%d\n",resultado);

			}
return 0;
}
