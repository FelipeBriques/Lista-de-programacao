#include<stdio.h>
void main()
{
 float SM, PR, NS;
 printf("Salario mensal: R$ ");
 scanf("%f", &SM);
 printf("Reajuste (em porcentagem): ");
 scanf("%f", &PR);
 NS=SM+(SM*(PR/100));
 printf("O salario cm reajuste sera: R$ %.2f", NS);
}
