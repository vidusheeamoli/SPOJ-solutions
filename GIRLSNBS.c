#include <stdio.h>

int main(void) {
	int x, y, a, b, c, d=0;
	while(d==0)
	{
		scanf("%d", &a);
		scanf("%d", &b);
		if(a==-1 && b==-1)
		{
			d=1;
			continue;
		}
		else
		{
			if(a==0 && b==0)
			{
				printf("0\n");
				continue;
			}
			if(a==b)
			{
				printf("1\n");
			}
			else
			{
				if(a==0)
				{printf("%d\n", b);
				continue;				
					
				}
				if(b==0)
				{printf("%d\n", a);
				continue;}
				if(a>b)
				{
					if(a%(b+1)==0)
					{
						c=a/(b+1);
						printf("%d\n", c);
					}
					else
					{
						c=(a/(b+1))+1;
						printf("%d\n", c);
					}
				}
				if(b>a)
				{
					if(b%(a+1)==0)
					{
						c=b/(a+1);
						printf("%d\n", c);
					}
					else
					{
						c=(b/(a+1))+1;
						printf("%d\n", c);
					}
					
				}
			}
		}
	}
	return 0;
}
