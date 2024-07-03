#include <stdio.h>
#include <stdlib.h>

void main()
{
    printf("Hello World \n");

    int x = 10;
    printf("O valor de x = %d\n", x);

    float y = 3.141592;
    printf("O valor de y = %.3f \n", y); //numero de casas decimais

    int a, b;
    scanf("%d %d", &a, &b);
    printf("Os valores digitados foram : %d %d\n", a, b);
}