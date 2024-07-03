#include <stdio.h>
#include <stdlib.h>

void main()
{
    //while
    int i = 0;
    while (i <= 5)
    {
        printf("O valor de i é = %d\n", i);
        i++;
    }

    //do-while sempre executa os comandos na primeira vez --> verifica a condição somente depois
    printf("\n\n");
    i = 0;
    do
    {
        printf("O valor de i é = %d\n", i);
        i++;
    } while (i<=5);

    //for
    printf("\n\n");

    for (int i = 0; i<=10; i++)
    {
        if (i > 5)
        {
            break;
        }
        else if (i == 3)
        {
            continue;
        }
        
        printf("O valor de i é = %d\n", i);
    }
    
}