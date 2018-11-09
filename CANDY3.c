#include <stdio.h>

int main(void) {
	long long t, n, a, b, c;
	scanf("%lld", &t);
	while(t--)
	{
		c=0;
		scanf("%lld", &n);
		for(a=0; a<n; a++)
		{
			scanf("%lld", &b);
			c=(b+c)%n;
		}
		if(c==0)
		{
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}
	}
	return 0;
}
