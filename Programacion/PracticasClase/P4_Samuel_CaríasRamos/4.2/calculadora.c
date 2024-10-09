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
	printf("Introduce un numero cualquiera: ");
	scanf("%f",&a);
	printf("Introduce un numero cualquiera: ");
	scanf("%f",&b);
	printf("Que operación quieres realizar ? = '+' '-' '*' '/': \n");
	scanf(" %c",&c);//Se pone el espacio antes del porcentaje porque cuando se encadenan dos peticiones de numero la 3 cosa que pidas no guardara el dato solicitado sino que la \n de salto de linea
	switch (c){
		case '+'://En el Switch case hay que poner : en los case y en el default pero en los break que cierra la linea ; , ademas hay que poner comilla simple 'a cualquier letra'
	printf("Resultado: %f",suma(a,b));
	break;
		case '-':
	printf("Resultado: %f",resta(a,b));
	break;
		case '*':
	printf("Resultado: %f",multiplicacion(a,b));
	break;
		case '/':
	printf("Resultado: %f",division(a,b));
	break;
		default:
	}


return 0;

}
