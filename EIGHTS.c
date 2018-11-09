#include <stdio.h>

int main(void) {
	int t, a;
	unsigned long long int b, k;
	scanf("%d", &t);
	for(a=0; a<t; a++)
	{
		scanf("%llu", &k);
		b=((250*k)-58);
		printf("%llu\n", b);
	}
	return 0;
}
