#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N;
	scanf("%d", &N);
	
	if (N == 0)
	{
		printf("E");
	}
	else if (N<=35)
	{
		printf("D");
	}
	else if (N <=60)
	{
		printf("C");
	}
	else if (N<=85)
	{
		printf("B");
	}
	else
	{
		printf("A");
	}
	return 0;
}

