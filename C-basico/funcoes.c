#include <stdio.h>

#define SOMA(x,y) (x+y) //macro ---> substituição direta => Oq era SOMA(x,y) vira (x+y) no código ---> não há verificação de tipo
// por isso não se coloca o ; no final
// () evita erros na hora da substiruição: a*SOMA = a*(x+y), não a*x +y

//por ser sub direta, evita leitura de dados na memória

int soma_f(int a, int b) //é feita uma cópia das variáveis, somente os valores são passados, não os endereços de memória
{
    return (a + b);
}

int soma2(int a, int b); //prototipo de função ou assinatura de função

int func_c_vetor(int vec[]); // endereço de memória do vetor é passada, não é feita uma cópia

//se forem matrizes ---> matriz[][3][3] ----> somente o primeiro pode ficar em branco, o resto deve ser declarado

//NAO E POSIVEL RETORNAR ARRAYS, POR ISSO A FUNÇÃO ALTERA O PROPRIO VETOR ORIGINAL

void main(int argc, char **argv) //argumentos da função main, argc ---> quantidade de parametros passados, argv ---> vetor de strings (cada posição contem um dos parametros, tem argc posições)
{
    int a, b, soma;
    a= 2;
    b = 3;

    soma = soma_f(a,b);

    int vetor[3] = {0,1,2};
    func_c_vetor(vetor); //vetor = &vetor[0] ----> passando o endereço de memória do primeiro valor

}

//declarar funções previamente assinadas
int soma2(int a, int b)
{
    return (a + b);
}

int func_c_vetor(int vec[])
{
    vec[0] += 1; //altera o valor do vetor original
    
    return 0;
}