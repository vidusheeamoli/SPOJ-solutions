#include <stdio.h>
#include<math.h>
int main(void) {
	unsigned long long t, a, b, c, d;
	scanf("%llu", &t);
	while(t--)
	{
		scanf("%llu", &a);
		b=8*a-7;
		c=sqrt(b);
		d=(c-1)/2;
		printf("%llu\n", d);
	}
	return 0;
}
