#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//Aqui declaro las funciones fuera del main para que dentro del main solo se llame a la funcion respectiva y de como retonrno las operaciones del return
float suma (float a,float b){
return a + b;
} 
float resta (float a, float b){
return a - b;
}
float multiplicacion (float a, float b){
return a * b;
}
float division (float a, float b){
return a / b;
}
//Este Main solo llama a cada funcion para que sea expresada
int main(){
	float a, b;
	printf("Escribir un numero cualquiera:\n");
	scanf("%f",&a);
	printf("Escribir un numero cualquiera:\n");
	scanf("%f",&b);
	printf("La suma de estos dos numeros es =%f\n",suma (a,b));
	printf("La resta de estos dos numeros es =%f\n",resta (a,b));
	printf("La multiplicación de estos dos numeros es =%f\n",multiplicacion (a,b));
	printf("La división de estos dos numeros es =%f\n",division (a,b));

return 0;

}
