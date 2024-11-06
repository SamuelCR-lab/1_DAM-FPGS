#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *
 *	Autor: SAMUEL CARIAS RAMOS
 *
 */

typedef struct {
	char marca[100];
	char modelo[100];
	int anio;
	int kilometraje;
} Vehiculo;

int main (){
	 Vehiculo miVehiculo;


	printf("Introduce la marca del vehiculo: ");
	scanf(" %s",miVehiculo.marca);
	printf("Introduce el modelo del vehiculo: ");
	scanf(" %s",miVehiculo.modelo);
	printf("Introduce el año del vehiculo: ");
	scanf(" %d",&miVehiculo.anio);
	printf("Introduce el kilometraje del vehiculo: ");
	scanf(" %d",&miVehiculo.kilometraje);
	printf("La marca del coche es = %s\n",miVehiculo.marca);
	printf("El modelo del coche es = %s\n",miVehiculo.modelo);
	printf("El año del coche es = %d\n",miVehiculo.anio);
	printf("El kilometraje del coche del coche es = %d\n",miVehiculo.kilometraje);
	return 0;
}
