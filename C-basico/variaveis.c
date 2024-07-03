#include <stdio.h>
#include <stdlib.h>

// função sizeof() retorna qnts bytes a variavel ocupa

//alocação estática --> armazenada na stack/pilha ---> limitado
//alocação dinâmica --> armazenada no heap  ---> limite da memória do pc

#define PI 3.14159 //macro, subsituição e constante

typedef float tipo_q_eu_quero; // foi criado um "novo tipo" que tem o mesmo efeito de float, mas  tem nome diferente

int global = 1; //variavel global

void main()
{
    //declarar variaveis
    int i, j, k;
    float c = 1.23683;

    //atribuir valores
    i = 2 + 5;
    printf("O tamnho de um inteiro é: %lu\n", sizeof(i)); //em bytes

    //casting
    float convertido;
    convertido = (float) i;
    printf("O valor convertido é %f \n", convertido);

    //inteiros
    short curto;
    int normal; 
    long longo;

    //floats
    float flutuante;
    double flutuante_grande;

    //char
    char caractere = 'a';

    //modificador
    unsigned int valor_positivo;

    //constantes

    const int constante = 3;
    float pi = PI;
    printf("O valor de pi é = %f\n", pi);

    //structs ---> tipo de variável composta
    //podem ser locais ou globais
    struct informacoes
    {
        int info1, info2;
        float info3; //mais de um tipo aceito no struct
    }; //; diabólico

    typedef struct informacoes t_informacoes; //abreviar structs

    struct informacoes info;
    t_informacoes infoo;

    info.info1 = 1;
    info.info2 = 2;
    info.info3= 3.0;
   
    //alternativamente
    typedef struct
    {
        int horas, minutos, segundos;
    }t_cronometro;

    t_cronometro cronometro = {1, 2, 3};

    //vetor de estruturas
    t_cronometro cronometros[10]; //cada cronometros[i] tem cronometros[i].horas ...


    //union ---> somente uma das variaveis

    union variaveis
    {
        char c;
        int i;
    };

    union variaveis variavel;
    variavel.c = 'a';
    variavel.i = 0; //so está registrado o valor 0, 'a' foi apagado

    //vantagem: só está alocado o máximo necessário para a variável de maior espaço


    //tipo enumerado

    enum dias {dom=0, seg=1, ter=2, qua, qui, sex, sab}; //pode-se associar o valor diretamente
    // associa os valores 0,1,2,3,4,5,6 a cada dia da semana
    //mesmo que usar #define dom 0

    int dia = seg;
    

}