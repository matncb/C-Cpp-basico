#include <cstdio> // biblioteca esquisita
#include <cstdlib> // acessar system

#include <iostream> //coiso normal
using namespace std;


int main()
{	
	// recebe um numero e printa ele
	
	
	/* 

	int a,b;
	
	// usando a esquisitice
	
	printf("Digite:\n");
	scanf("%d%d", &a, &b);
	
	printf("%d\n",a+b);
	
	//sendo normal
	
	cout << "Digite:\n";
	
	cin >> a;
	cin >> b;
	
	cout << a+b;
	
	*/
	
	
	
	
	//exemplo de if
	
	
	int var1, var2;
	
	var1 = 2;
	var2 = 3;
	
	if (var1 == var2)
	{
		//printf("As vars sao iguais\n");
		
	}
	else if (var1>var2)
	{
		//printf("var1 > var2\n");
	}
	else
	{
		//printf("var2 > var1\n");
		
	}
	
	
	
	// exemplo de for 
	
	for (int i= 0; i< 9; i++)
	{
		//printf("%d\n", i);
		//cout << i<< endl;
	}
	
	
	//exemplo de while
	
	int cont;
	cont = 0;
	
	while (cont<9)
	{
		//printf ("%d\n",cont);
		//cout << cont << endl;
		cont ++;
	}
	
	//com do
	
	cont = 0;
	
	do
	{
		//printf("%d\n", cont);
		//cout << cont << endl;
		cont ++;
			
	} while (cont<9);
	
	
	// lista exemplo
	
	int tamanho;
	tamanho = 3;
	
	//scanf ("%d", &tamanho);
	//cin >> tamanho;
	
	int lista[tamanho];
	
	for (int i = 0; i< tamanho; i++)  // varre a lista e a preenche
	{
		//cin >> lista[i];
		//scanf ("%d", &lista[i]);
	}
	
	for (int i = 0; i< tamanho; i++) //varre a lista e printa o q tem dentro
	{
		//printf ("%d\n", lista[i]);
		//cout << lista[i] << endl;
	}
	
	
	
	
	//exemplo switch
	
	enum  states {correr, andar, pular}; // enumerar estados (correr = 0, andar = 1, pular = 2)
	
	states estado;
	
	estado = pular;
	
	//scanf ("%d", &estado);    // input em forma de int
	//cin >> estado;			// input em forma de int
	
	
	switch (estado)
	{
		case correr:
			printf("Correndo...\n");
			break;
		case andar:
			printf("Andando...\n");
			break;
		case pular:
			printf("Pulando...\n");
			break;
		default:
			printf("Nao e um estado");
			break;
	}
	

	
	system ("pause"); // pausa o programa
	return 0;
}
