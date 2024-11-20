#include <stdio.h>
#include <stdlib.h>
/*
 *
 * 	Autor Samuel Carias
 *
 */

int main(){
	int dia = 0;
	printf("Ingresa un numero del 1-7: ");
	scanf("%d",&dia);
	switch (dia){
	case 1: 
	printf("Hoy es Lunes\n");
	break;
	case 2: 
	printf("Hoy es Martes\n");
	break;
	case 3: 
	printf("Hoy es Miércoles\n");
	break;
	case 4: 
	printf("Hoy es Jueves\n");
	break;
	case 5: 
	printf("Hoy es Viernes\n");
	break;
	case 6: 
	printf("Hoy es Sabado\n");
	break;
	case 7: 
	printf("Hoy es Domingo\n");
	break;
	default:
	printf("Número no válido\n");
	break;
	}


return 0;
}
