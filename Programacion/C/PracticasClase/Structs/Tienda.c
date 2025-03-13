#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *
 *	Autor: SAMUEL CARIAS RAMOS
 *
 */

#define MAX_ITEMS 100

typedef struct {
	char nombre[100];
	char direccion[100];
	char telefono[15];
} Proveedor;

typedef struct {
	char nombre[100];
	float precio;
	Proveedor proveedor;
} Articulo;

typedef struct {

	Articulo articulos[MAX_ITEMS];
	int cantidades[MAX_ITEMS];
	int totalArticulos;
} Inventario;

int main (){
	Inventario miInventario;// Declaracion
				//Esta forma de inicializar un struct solo es.
				//valida en la declaracion.
	 Articulo articulo = {"nombre", 10,{"NomPro", "DIRpro","telPro"}}; // Declaracion e Inicializacio
// Aqui, que miInventario ya esta declarada, no puedo inicializar asi: inventario
miInventario.articulos[0] = articulo;
miInventario.cantidades[0] = 10;
	printf("Nombre articulo: %s\n",miInventario.articulos[0].nombre);
	printf("El modelo del coche es = %s\n",miInventario.articulos[0].proveedor.nombre);
	printf("Cantidad: %d\n",miInventario.cantidades[0]);
	return 0;
}
