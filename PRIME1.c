#include <stdio.h>

int main(void) {
	int t, m, n, a, b, c, d, e;
	scanf("%d", &t);
	for(a=0; a<t; a++)
	{
		scanf("%d", &m);
		scanf("%d", &n);
		for(b=m; b<=n; b++)
		{
			e=1;
			c=sqrt(b);
			for(d=2; d<=c; d++)
			{
				if(b%d==0)
				{
					e=0;
					break;
				}
			}
			if(e==1 && b!=1)
			{
				printf("%d\n", b);
			}
		}
		printf("\n");
	}
	return 0;
}
