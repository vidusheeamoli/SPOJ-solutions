#include <stdio.h>

int main(void) {
	int a, b, c, d=1, e, f;
	while(d!=0)
	{
		scanf("%d", &a);
		scanf("%d", &b);
		scanf("%d", &c);
		if(a==0 && b==0 && c==0)
		{
			d=0;
		}
		else
		{
			if(b==(a+c)/2 && (b-a)==(c-b))
			{
				e=c-b;
				f=c+e;
				printf("AP %d\n", f);
			}
			else
			{
				e=b/a;
				f=a*e*e*e;
				printf("GP %d\n", f);
			}
		}
	}
	return 0;
}

