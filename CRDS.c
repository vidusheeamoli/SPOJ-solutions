#include <stdio.h>

int main(void) {
	int t, z;
	scanf("%d", &t);
	unsigned long long n, a, b, c; 
	for(z=0; z<t; z++)
	{
		scanf("%llu", &n);
		a=n*(n+1);
		b=(n*(n-1))/2;
		c=(a+b)%1000007;
		printf("%llu\n", c);
	}
	return 0;
}
