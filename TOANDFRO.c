#include <stdio.h>
#include<string.h>

int main(void) {
	int n, i=1, x, y, j, k, z=0, m, p, q;
	char v[200];
	while(i!=0)
	{
		scanf("%d", &n);
		if(n==0)
		{
			i=0;
			break;
		}
		else
		{
			scanf("%s", v);
			x=strlen(v);
			y=x/n;
			char u[y][n];
			for(j=0; j<y; j++)
			{
				if(z%2==0 || z==0)
				{
					for(k=0; k<n; k++)
					{
						u[j][k]=v[(z*n)+k];
					}
				}
				else
				{
					for(k=(n-1); k>=0; k--)
					{
						
						u[j][k]=v[(z*n)+(n-k-1)];
					}
				}
				z=z+1;
			}
			for(p=0; p<n; p++)
			{
				for(q=0; q<y; q++)
				{
					printf("%c", u[q][p]);
				}
			}
			printf("\n");
			z=0;
		}
	}
	return 0;
}
