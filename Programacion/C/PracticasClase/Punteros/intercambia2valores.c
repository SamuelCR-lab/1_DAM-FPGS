#include <stdio.h>
#include <stdlib.h>
/**
 * 
 * 	Autor: SAMUEL CARIAS RAMOS
 *  
 */

void intercambiar(int *n1, int *n2){
	int numINT;
	numINT = *n1;
	*n1 = *n2;
	*n2 = numINT;
}

int main(){
	int n1 = 10;
	int n2 = 8;
	intercambiar(&n1,&n2);
	printf("%d\n", n1);
	printf("%d\n", n2);
	return 0;
}
