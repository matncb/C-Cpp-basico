#include <stdio.h>
#include <stdlib.h>

void main()
{
    int x = 10;

    //if e else
    if (x < 0)
    {
        printf("O valor é menor que zero\n");
    }
    else if (x % 2 == 0)
    {
        printf("O valor é par\n");
    }
    else
    {
        printf("O valor é impar\n");
    }

    //switch case --- somento com int e char
    switch (x)
    {
    case 10:
        printf("O valor é 10\n");
        break;
    default:
        printf("O valor não é 10\n");
    }
}