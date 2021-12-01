#include <stdio.h>
#include "aritmetica.h"/*archivo de cabecera*/

#define NUM1	6
#define NUM2	3


int main (){
  printf ("Dados los números %d y %d\n", NUM1, NUM2);
  printf ("La suma es %d\n", suma (NUM1, NUM2));
  printf ("La resta es %d\n", resta (NUM1, NUM2));
  printf ("La multiplicación es %d\n", multiplicacion (NUM1, NUM2));
  printf ("La división es %d\n", division (NUM1, NUM2));
  return 0;
}
