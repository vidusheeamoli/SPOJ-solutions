#include <stdio.h>

int main(void) {
	int n, a=0;
	float c, sum=0.00;
	while(a==0)
	{
		scanf("%f", &c);
		if(c==0.00)
		{
			a=1;
			break;
		}
		else
		{
			n=2;
			while(sum<c)
			{
				sum=sum+(1.00/n);
				n=n+1;
			}
			printf("%d card(s)\n", n-2);
			n=2;
			sum=0.00;
		}
		
	}
	return 0;
}
