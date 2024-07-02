#include <bits/stdc++.h>
using namespace std;

int main()
{
	
	float notas[5];
	float maior;
	float menor;
	float s;
	float v;
	
	for (int i = 0; i<5; i++)
	{
		scanf("%f",&v);
		s += v;
		
		notas[i] = v;
		
		if (i == 0)
		{
			menor = v;
			maior = v;
		}
		
		if (notas[i]>maior)
		{
			maior = notas[i];
		}
		if (notas[i] < menor)
		{
			menor = notas[i];
		}
	}
	
	

	printf("%.1f",s -maior -menor );
	
	return 0;
}

