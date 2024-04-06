#include <bits/stdc++.h>
using namespace std;

int main()
{
	int p1, c1, p2, c2, a, b, r;
	
	scanf("%d%d%d%d", &p1, &c1, &p2, &c2);
	
	a = p1 * c1;
	b = p2 * c2;
	
	if (a == b)
	{
		r = 0;
	}
	else if (b>a)
	{
		r = 1;
	}
	else
	{
		r = -1;
	}
	printf("%d", r);
	
	return 0;
}
