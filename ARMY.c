#include <stdio.h>

int main(void) {
	int t, a, b, c, d, i;
	scanf("%d", &t);
	while(t--)
	{
		scanf("%d %d", &a, &b);
		int x[a];
		int y[b];
		for(i=0; i<a; i++)
		{
			scanf("%d", &x[i]);
		}
		for(i=0; i<b; i++)
		{
			scanf("%d", &y[i]);
		}
		c=x[0];
		d=y[0];
		for(i=1; i<a; i++)
		{
			if(x[i]>=c)
			{
				c=x[i];
			}
		}
		for(i=1; i<b; i++)
		{
			if(y[i]>=d)
			{
				d=y[i];
			}
		}
		if(c>=d)
		{
			printf("Godzilla\n");
		}
		else
		{
			printf("MechaGodzilla\n");
		}
	}
	return 0;
}
