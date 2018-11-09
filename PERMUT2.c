#include <stdio.h>

int main(void) {
	int n, z=0, a, b, c;
	while(z!=1)
	{
		scanf("%d", &n);
		if(n==0)
		{
			z=1;
			break;
		}
		else
		{
			c=0;
			int x[n];
			for(a=0; a<n; a++)
			{
				scanf("%d", &x[a]);
			}
			
			for(a=1; a<=n; a++)
			{
				for(b=0; b<n; b++)
				{
					if(x[b]==a)
					{
						if(x[a-1]!=b+1)
						{
							c=1;
							printf("not ambiguous\n");
							a=n+1;
							break;
						}
					}
					
				}
			}
			if(c==0)
			{
				printf("ambiguous\n");
			}
		}
	}
	return 0;
}

