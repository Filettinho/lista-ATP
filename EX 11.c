#include<stdio.h>
#include<math.h>

int main()
{
    float salario1,salario2,reajuste;
    printf("Digite um salario");
    scanf("%f" ,&salario1);
    salario2 = salario1*0.25 + salario1;
    reajuste = salario2 - salario1;
    printf("salario antigo: %.2f\n" ,salario1);
    printf("salario novo: %.2f\n" ,salario2);
    printf("reajuste: %.2f\n" , reajuste);
    return 0;
}