#include <stdio.h>
 
int main(void) {
	int n, i, j, a, b, q, z, h1, h2, p=0, s, t, u, v;
	scanf("%d", &u);
	for(v=0; v<u; v++)
	{
	scanf("%d", &n);
	int x[n];
	int y[n];
	for(i=0; i<n; i++)
	{
		scanf("%d", &x[i]);
	}
	for(s=0; s<n; s++)
	{
		scanf("%d", &y[s]);
	}
	for(q=0; q<n; q++)
	{
		h1=x[0];
		h2=y[0];
		for(t=0; t<n; t++)
		{
			if(x[t]>=h1)
			{
				h1=x[t];
				a=t;
			}
		}
		for(j=0; j<n; j++)
		{
			if(y[j]>=h2)
			{
				h2=y[j];
				b=j;
			}
		}
		x[a]=0;
		y[b]=0;
		z=h1*h2;
		p=p+z;
	}
	printf("%d\n", p);
	p=0;
	}
	return 0;
}
