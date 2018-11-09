#include <stdio.h>

int main(void) {
	int t, n, a, b=0, i, j, c=1, p=0;
	scanf("%d", &t);
	for(i=0; i<t; i++)
	{
		scanf("%d", &n);
		a=n;
		while(a!=0)
		{
			a=a/5;
			b=b+1;
		}
		for(j=1; j<=b; j++)
		{
			c=c*5;
			p=p+(n/c);
		}
		printf("%d\n", p);
		c=1;
		p=0;
		b=0;
	}
	return 0;
}
