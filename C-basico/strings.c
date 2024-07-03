#include <stdio.h>
#include <stdlib.h>

#include <string.h>

void main()
{
    // \0 indica final da string
    char texto[] = "exemplo"; // \0 no final inserido automaticamente

    //leitura de caracteres

    char letra;
    int n;

    //scanf("%d ", &n); //colocar o espaco depois se nao quiser q a entra seja nletra sem separar
    //scanf("%c", &letra);

    //printf("n = %d\n", n);
    //printf("letra = %c\n", letra);

    //imprimir strings

    printf("A string é: %s\n", texto);

    //ler strings com scanf

    // ler ate o primeiro espaço, /n ou /t

    char escrita[80];
    //scanf("%s ", escrita); //texto = &texto[0]
    //printf("%s\n", escrita);

    //ler com fget
    //ler ate o primeiro /n

    char escrita2[80];
    //fgets(escrita2, 80, stdin);
    //printf("%s\n", escrita2);

    ////////////////////////////////////

    //funcao strlen ---> tamanho da string
    char s[80] = "teste";
    //printf("%lu\n", strlen(s));
    printf("%u\n", (unsigned int) strlen(s));

    //concatenar strings strcat

    char s1[80] = "teste1";
    char s2[80] = "teste2";
    strcat(s1, s2); //s2 no final de s1. o valor de s1 foi alterado

    //copiar strings
    strcpy(s1, s2); //valor de s1 é substituido por s2

    //converter string para int

    char numero[] = "12345";
    int n = atoi(numero);




}