#include <stdio.h>

int main(void) {
	int N, a, b, c=0;
	scanf("%d", &N);
	for(a=1; a<=N; a++)
	{
		for(b=a; b<=N; b++)
		{
			if(a*b<=N)
			{
				c=c+1;
			}
		}
	}
	printf("%d", c);
	
	return 0;
}
