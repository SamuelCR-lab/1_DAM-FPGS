#include <stdio.h>
#include <stdlib.h>


int busqueda_binaria (int * array, int a_buscar, int pos_ini, int pos_fin);

int main (){
	int arr[10]={-5,1,9,10,11,12,17,120,150,1500};
	int a_buscar;
	printf("Valor que quieres buscar de estos numeros -5,1,9,10,11,12,17,120,150,1500: ");
	scanf("%d",&a_buscar);
	int encontrado = busqueda_binaria(arr, a_buscar, 0, 10);
	if(encontrado == 1){
		printf("Encontrado el número %d que ingresaste.\n",a_buscar);
	}else{
		printf("No se ha encontrado el número %d que ingresaste.\n",a_buscar);
	}
	
return 0;
}
int busqueda_binaria (int * array, int a_buscar, int pos_ini, int pos_fin){
	if (array[(pos_ini+pos_fin)/2] == a_buscar){
		return 1;
	}else if(array[(pos_ini+pos_fin)/2] < a_buscar){
		busqueda_binaria (array, a_buscar,(pos_ini+pos_fin)/2, pos_fin);
	}else if (array[(pos_ini+pos_fin)/2] > a_buscar){
		busqueda_binaria(array, a_buscar,pos_ini, (pos_ini+pos_fin)/2);
	}else{
		return 0;
	}

}