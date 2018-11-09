#include <stdio.h>

int main(void) {
	int z=0;
	unsigned long long a, b, c, d, e=0;
	while(z==0)
	{
		scanf("%llu", &a);
		if(a==-1)
		{
			z=1;
			break;
		}
		else
		{
			if(a==1)
			{
				printf("Y\n");
				continue;
			}
			if(a%6==1)
			{
				b=a/6;
				for(c=0; c<=b; c++)
				{
					d=(c*(c+1))/2;
					if(d==b)
					{
						e=1;
						break;
					}
				}
				if(e==1)
				{
					printf("Y\n");
				}
				else
				{
					printf("N\n");
				}
			}
			else
			{
				printf("N\n");
			}
			e=0;
		}
	}
	return 0;
}
