#include <bits/stdc++.h>
using namespace std;

int main()
{
	int A,B,C,D;
	scanf("%d%d%d%d", &A, &B, &C, &D);
	bool r = false;
	if (A == B+C+D)
	{
		if (B + C == D)
		{
			if (B == C)
			{
				printf("S");
				r = true;
			}
		}
	}
	
	if (r == false)
	{
		printf("N");
	}
	return 0;
}
