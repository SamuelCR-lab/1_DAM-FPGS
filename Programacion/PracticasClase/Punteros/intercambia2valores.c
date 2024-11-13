#include <stdio.h>
#include <stdlib.h>
/**
 * 
 * 	Autor: SAMUEL CARIAS RAMOS
 *  
 */

void intercambiar(int *n1, int *n2){
	int num1;
	num1 = *n2;
	num2 = *n1;
}

int main(){
	int num1 = 10;
	int num2 = 8;
	intercambiar(&num1,&num2);
	printf("%d\n", num1);
	printf("%d\n", num2);
	return 0;
}
