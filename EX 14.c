#include<stdio.h>
#include<math.h>

int main()
{
    int nascimento,atual,semanas;
    printf("Digite o ano de nascimento e o ano atual");
    scanf("%d %d" ,&nascimento,&atual);
    int idade = atual-nascimento;
    semanas = (365/7)* idade;
    printf("idade %d", idade);
    printf("semanas %d", semanas);
    return 0;
}