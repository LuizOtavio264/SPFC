#include <stdio.h>
#include <stdlib.h>

void main(){
float c, f;

printf ("insira uma temperatura em celcius");
scanf("%f", c);

f = ( c *9/5 + 32 );

printf ("temperatura: %.2F", f);


}
