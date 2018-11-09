#include <stdio.h>

int main(void) {
	int N, a, b, c, q, r, m, n, A=0, B=0, C, d, e, C1;
	scanf("%d", &N);
	for(C=1; C<=N; C++)
	{
		scanf("%d", &a);
		scanf("%d", &b);
		q=a;
		m=b;
		while(q!=0)
		{
			r=q%10;
			A=(A*10)+r;
			q=q/10;
		}
		while(m!=0)
		{
			n=m%10;
			B=(B*10)+n;
			m=m/10;
		}
		c=A+B;
		d=c;
		while(d!=0)
		{
			e=d%10;
			C1=(C1*10)+e;
			d=d/10;
		}
		printf("%d\n", C1);
		A=0;
		B=0;
		C1=0;
	}
	return 0;
}
