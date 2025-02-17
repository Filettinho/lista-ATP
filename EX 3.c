#include<stdio.h>
#include<math.h>

int main()
{
    int numerador,denominador,resto;
    printf("Digite um numerador e um denominador");
    scanf("%d%d", &numerador,&denominador);
    resto = numerador % denominador;
    printf("resto = %d", resto);
    return 0;
}

