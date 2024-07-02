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

void update(int *p)
{
    *p += 1;
}

void main()
{
    int var = 15;
    int *ptr;

    ptr = &var;

    display(var, ptr);
    update(ptr);
    printf("\n\n");
    display(var, ptr);
    printf("\n\n");

    // *ptr = conteudo do endereco da variavel que ptr aponta
    // ptr = endereco da variavel
}