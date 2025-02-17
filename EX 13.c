#include<stdio.h>
#include<math.h>

int main()
{
    int peso,pesog,novopeso;
    printf("Digite o seu peso");
    scanf("%d", &peso);
    pesog = peso*1000;
    novopeso = pesog*0.05 + pesog;
    printf("pesog %d", pesog);
    printf("novopeso %d", novopeso);
    return 0;
}