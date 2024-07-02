#include <bits/stdc++.h>
using namespace std;

int main()
{
	int Cv,Ce,Cs, Fv, Fe, Fs, PC, PF;
	scanf("%d%d%d%d%d%d", &Cv, &Ce, &Cs, &Fv, &Fe, &Fs);
	
	PC = 3*Cv + Ce;
	PF = 3*Fv + Fe;
	
	if (PC>PF)
	{
		printf("C");
	}
	else if (PF>PC)
	{
		printf("F");
	}
	else if (Cs > Fs)
	{
		printf("C");
	}
	else if (Fs>Cs)
	{
		printf("F");
	}
	else
	{
		printf("=");
	}
	return 0;
}

