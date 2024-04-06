#include <bits/stdc++.h>
using namespace std;

int main()
{
	int C, P, F;
	scanf("%d%d%d", &C, &P, &F);
	
	if (C*F <= P)
	{
		printf("S");
	}
	else
	{
		printf("N");
	}
	return 0;
}

