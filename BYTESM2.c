#include <stdio.h>
int max(int a, int b, int c);
int main(void) {
	int t, a, b, c, d, e, p, high;
	scanf("%d", &t);
	while(t--)
	{
		scanf("%d %d", &a, &b);
		int x[a][b];
		for(c=0; c<a; c++)
		{
			for(d=0; d<b; d++)
			{
				scanf("%d", &x[c][d]);
			}
		}
		for(c=1; c<a; c++)
		{
			for(d=0; d<b; d++)
			{
				if(d==0)
				{
					p=max(0, x[c-1][d], x[c-1][d+1]);
					x[c][d]=x[c][d]+p;
				}
				else if(d==b-1)
				{
					p=max(0, x[c-1][d], x[c-1][d-1]);
					x[c][d]=x[c][d]+p;
				}
				else
				{
					p=max(x[c-1][d], x[c-1][d-1], x[c-1][d+1]);
					x[c][d]=x[c][d]+p;
				}
			}
		}
		high=x[a-1][0];
		for(d=1; d<b; d++)
		{
			if(x[a-1][d]>=high)
			{
				high=x[a-1][d];
			}
		}
		printf("%d\n", high);
	}
	return 0;
}
int max(int a, int b, int c)
{
	int high;
	high=a;
	if(b>=a && b>=c)
	{
		high=b;
	}
	else if(c>=a && c>=b)
	{
		high=c;
	}
	return high;
}