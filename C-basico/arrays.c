#include <stdio.h>
#include <stdlib.h>

#define TAM_MAX 10
void main()
{
    //sempre do mesmo tipo e tamanho fixo

    int lista[TAM_MAX] = {0,0,0,0,0,0,0,0,0,0};

    for (int i = 0; i<TAM_MAX; i++)
    {
        lista[i] = i;
    }

    for (int i = 0; i<TAM_MAX; i++)
    {
        printf("%d\n", lista[i]);
    }

    //matrizes

    int matriz[2][2] = {{0,0}, {0,0}};

    //alocação dinâmica ---> armazenar no heap ---> não tem o limite do stack

    //malloc aloca uma bloco consecutivo de bytes e retorna o endereço desse bloco

    char *p;
    p = (char*) malloc(4*sizeof(char)); //converter o retorno da função para um ponteiro de tipo char
    if (p ==NULL) exit(EXIT_FAILURE);

    p[0] = 'a';
    p[1] = 'b';
    p[2] = 'c';
    p[3] = '\0';

    p = (char*) realloc(p, 20*sizeof(char)); //somente expande ou reduz, sem alterar os dados anteriores

    free(p); //liberar o espaço
    //se feito dentro de funções, não há liberação automática, como seria no caso "normal"

    int **q;
    //matriz 5x3

    q = (int**) malloc(5*sizeof(int*));
    for(int i = 0; i< 5; i++)
    {
        q[i] = (int*) malloc(3*sizeof(int));
    }

    //as alocações não ocorrem de forma continua, como em M[5][3]

    for (int i =0; i<5; i++)
    {
        free(q[i]);
    }
    free(q);

    //liberar ---> processo inverso


}
