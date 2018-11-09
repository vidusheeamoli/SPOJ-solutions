#include <stdio.h>

int main(void) {
	int N=1, a, b=0, c=1;
	while(c==1)
	{
		scanf("%d", &N);
		if(N!=0)
		{
			for(a=1; a<=N; a++)
			{
				b=b+(a*a);
			}
			printf("%d\n", b);
			b=0;
		}
		else
		{
			c=0;
		}
	}
	return 0;
}
