#include<stdio.h>
#include<math.h>

int main()
{
    int n1,n2;
    printf ("Digite dois numeros inteiros e distintos");
    scanf ("%d %d", &n1,&n2);
    if(n1>=n2)
{
    printf("O numero 1 e maior");
}
else
{
    printf("O numero 2 e maior");
}
return 0;
}

