#include <bits/stdc++.h>
using namespace std;

int main()
{
	int L, D, K, P;
	
	scanf("%d%d%d%d",&L, &D, &K, &P);
	
	printf("%d", K*L + P*(L/D));
	return 0;
}

