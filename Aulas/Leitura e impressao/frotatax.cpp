#include <bits/stdc++.h>
using namespace std;

int main()
{
	float A, G, Ra, Rg;
	
	scanf("%f%f%f%f",&A,&G,&Ra, &Rg);
	
	if (A/Ra < G/Rg)
	{
		printf("A");
	}
	else
	{
		printf("G");	
	}
	return 0;
}

