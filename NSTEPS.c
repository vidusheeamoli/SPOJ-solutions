#include <stdio.h>

int main(void) {
	int N, x, y, a, b, c;
	scanf("%d", &N);
	for(a=1; a<=N; a++)
	{
		scanf("%d", &x);
		scanf("%d", &y);
		c=x-y;
		if(c==0 || c==2)
		{
			if(x%2==0)
			{
				b=x+y;
				printf("%d\n", b);
			}
			else
			{
				b=x+y-1;
				printf("%d\n", b);
			}
		}
		else
		{
			printf("No Number\n");
		}
	}
	return 0;
}
