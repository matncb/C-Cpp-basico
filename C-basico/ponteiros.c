#include <stdio.h>
#include <stdlib.h>

void display(int var, int *ptr)
{
    printf("conteudo de var = %d \n", var);
    printf("endereco de var = %p \n", &var);
    printf("\n");
    printf("conteudo apontado pelo ponteiro = %d \n", *ptr);
    printf("endereco apontado pelo ponteiro = %p \n", ptr);
}

void update(int *p) //endereco da varivavel passado como parâmetro
{
    *p += 1;
}

//funcoes podem retornar ponteiros

int *max(int *a, int *b)
{
    if (*a>*b)
    {
        return a; //retorna o ponteiro
    }
    else
    {
        return b;
    }
}

void main()
{
    int var = 15;
    int *ptr = NULL;

    ptr = &var;

    display(var, ptr);
    update(ptr);
    printf("\n\n");
    display(var, ptr);
    printf("\n\n");

    // *ptr = conteudo do endereco da variavel que ptr aponta
    // ptr = endereco da variavel

    //ponteiros para structs

    typedef struct
    {
        int dia, mes, ano;
    }t_data;

    t_data hoje;
    t_data *p = &hoje;

    (*p).dia = 1; // parenteses são necesssários
    p->mes = 2; // alternativamente

    //ponteiros para vetores
    int v[10];
    int *p_vec = NULL;

    p_vec = v; //ou p = &v[0]
    p_vec++; //p = &v[1], ou seja, uma posição a frente, quantidade de bytes depende do tipo do ponteiro

    //ponteiros para ponteiros

    char i, *p;
    p = &i;

    char **q;
    q = &p;

    **q = 'a';

}