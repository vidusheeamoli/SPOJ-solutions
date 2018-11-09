#include <stdio.h>
long long add(long long a);
int main(void) {
	long long n, a, b;
	while(scanf("%lld", &n) != EOF)
	{
		a=n;
		b=add(a);
		if(b>=a)
		{
		printf("%lld\n", b);
		}
		else
		{
			printf("%lld\n", a);
		}
	}
	return 0;
}
long long add(long long a)
{
	long long c, d, e, f;
	if(a<=10)
	{
		c=a;
	}
	else
	{
		d=add(a/2);
		e=add(a/3);
		f=add(a/4);
		c=d+e+f;
	}
	if(c<a)
	{
	c=a;
	}
	return c;
}