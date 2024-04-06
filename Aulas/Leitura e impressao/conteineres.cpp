#include <bits/stdc++.h>
using namespace std;

int main()
{
	
	int A, B, C, X, Y, Z;
	scanf("%d%d%d%d%d%d", &A, &B, &C, &X, &Y, &Z);
	
	int x1, y1, z, r1;
	x1 = floor(X/A);
	y1 = floor(Y/B);
	z = floor(Z/C);
	
	r1 = x1 * y1 *z;
	

	printf("%d",r1);
	
	
	
	return 0;
}

