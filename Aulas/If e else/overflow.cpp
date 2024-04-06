#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N, P, Q, r;
	char C;
	scanf("%d%d %c %d", &N, &P, &C,&Q);
	
	if (C == '+')
	{
		r = P+Q;	
	}
	else
	{
		r = P*Q;	
	} 
	
	if (r<=N)
	{
		printf("OK");
	}
	else
	{
		printf("OVERFLOW");
	}
	return 0;
}

