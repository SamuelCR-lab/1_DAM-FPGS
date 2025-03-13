#include <stdio.h>
#include <stdlib.h>


int busqueda_binaria (int * array, int a_buscar, int pos_ini, int pos_fin);

int main (){
	int arr[10]={-5,1,9,10,11,12,17,120,150,1500};
	int a_buscar;
	printf("Valor que quieres buscar de estos numeros -5,1,9,10,11,12,17,120,150,1500: ");
	scanf("%d",&a_buscar);
	int encontrado = busqueda_binaria(arr, a_buscar, 0, 10);
	if(encontrado == a_buscar){
		printf("Encontrado el número %d que ingresaste.\n",a_buscar);
	}else if (encontrado == -1){
		printf("No se ha encontrado el número %d que ingresaste.\n",a_buscar);
	}
	
return 0;
}
int busqueda_binaria (int * array, int a_buscar, int pos_ini, int pos_fin){
	int mitad = (pos_ini+pos_fin)/2;
	if (array[mitad] == a_buscar){
		return mitad;
	}
	if (pos_ini > pos_fin){
		return -1;
	}
	if(array[mitad] < a_buscar){
		return busqueda_binaria (array, a_buscar,mitad+1, pos_fin);
	}else if (array[mitad] > a_buscar){
		return busqueda_binaria(array, a_buscar,pos_ini, mitad-1);
	}
}