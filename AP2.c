#include <stdio.h>

int main(void) {
	long long t, x, y, z, a, d, n, i, j;
	scanf("%lld", &t);
	for(i=1; i<=t; i++)
	{
		scanf("%lld", &x);
		scanf("%lld", &y);
		scanf("%lld", &z);
		n=2*z/(x+y);
		printf("%lld\n", n);
		d=(x-y)/(5-n);
		a=x-2*d;
		for(j=1; j<=n; j++)
		{
			printf("%lld ", a);
			a=a+d;
		}
		printf("\n");
	}
	return 0;
}
