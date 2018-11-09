#include <stdio.h>

int main(void) {
	unsigned long long n, z, i;
	while(scanf("%llu", &n)!=EOF)
	{
		if(n==1)
		{
			printf("NIE\n");
		}
		else
		{
			i=0;
			while(n>1)
			{
				if(n%2==0)
				{
					n=n/2;
				}
				else
				{
					n=(3*n)+3;
				}
				if(n==3)
				{
					i=1;
					break;
				}
			}
			if(i==0)
			{
				printf("TAK\n");
			}
			else
			{
				printf("NIE\n");
			}
		}
	}
	return 0;
}
