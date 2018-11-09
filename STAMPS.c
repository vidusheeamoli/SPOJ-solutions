#include <stdio.h>

int main(void) {
	int temp, i, test, x, check;
	long long sum, b; 
	scanf("%d", &test);
	for(int d=1; d<=test; d++)
	{
		printf("Scenario #%d:\n", d);
		scanf("%lld %lld", &sum, &b);
		int a[b];
		for(i=0; i<b; i++)
		{
			scanf("%d", &a[i]);
		}
		for(i=0; i<b; i++)
		{
			for(int z=i+1; z<b; z++)
			{
				if(a[i]<a[z])
				{
					temp=a[i];
					a[i]=a[z];
					a[z]=temp;
				}
			}
		}
		x=0;
		check=0;
		for(i=0; i<b; i++)
		{
			x=x+a[i];
			if(x>=sum)
			{
				check=1;
				printf("%d\n", i+1);
				break;
			}
		}
		if(check==0)
		{
			printf("impossible\n");
		}
		printf("\n");
		
	}
	return 0;
}
