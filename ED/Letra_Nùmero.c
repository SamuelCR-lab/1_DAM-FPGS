#include <stdio.h>
#include <stdlib.h>
  int main() {
    char caracter;
      printf("Introduce un carácter cualquiera: ");
      scanf(" %c", &caracter);
      if (caracter >= '0' && caracter <= '9'){
      printf("Es un número\n");
      }else if ((caracter >= 'A' && caracter <= 'Z')||(caracter >= 'a' && caracter <= 'z')){
      printf("Es una letra\n");
      }else {
      printf("No es ni un número ni una letra\n");
      }
    return 0;
}
