#include <stdio.h>
#include <stdlib.h>


int main(){
	int n1;
	int suma =0;

	while (n1){
	printf("Introduce un número entero: ");
	scanf("%d",&n1);
	if (n1 > 0){
	suma = suma + n1;
	}else{
	break;
	}
	} 
	printf("La suma de los números ingresados es %d\n",suma);
	
return 0;
}
