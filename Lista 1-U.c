#include <stdio.h>
void main()
{
 float volume, raio;
 printf("Raio: ");
 scanf("%f", &raio);
 volume=(4/3)*3.14159*(raio*raio*raio);
 printf("O volume dessa esfera: %f", volume);
}