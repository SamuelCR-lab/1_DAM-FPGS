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
	char c;
	printf("Escribir un numero cualquiera:\n");
	scanf("%f",&a);
	printf("Escribir un numero cualquiera:\n");
	scanf("%f",&b);
	printf("Que operación quieres realizar ? = 'S' 'R' 'M' 'D'\n");
	scanf(" %c",&c);//Se pone el espacio antes del porcentaje porque cuando se encadenan dos peticiones de numero la 3 cosa que pidas no guardara el dato solicitado sino que la \n de salto de linea
	if (c == 'S'){	
	printf("La suma de estos dos numeros es =%f\n",suma (a,b));
	}else if (c == 'R'){
	printf("La resta de estos dos numeros es =%f\n",resta (a,b));
	}else if (c == 'M'){
	printf("La multiplicación de estos dos numeros es =%f\n",multiplicacion (a,b));
	}else{	//No hay que poner if ni condicion entre parentesis ni nada debido a que ya es la ultima condicion y si no se cumplieron las anteriores es que solo queda esta y se expresa
	printf("La división de estos dos numeros es =%f\n",division (a,b));
	}


return 0;

}
