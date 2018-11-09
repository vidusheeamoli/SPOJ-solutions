#include<bits/stdc++.h>
using namespace std;
long long func(long long a, long long b);
int main(void)
{
	long long n, a, b, count;
	scanf("%lld", &n);
	while(n--)
	{
		scanf("%lld %lld", &a, &b);
		count=func(a, b);
		printf("%lld\n", count);
	}
	return 0;
}
long long func(long long a, long long b)
{
	if(a==0 || b==0)
	{
		return 0;
	}
	if(a>=2*b)
	{
		return b;
	}
	if(b>=2*a)
	{
		return a;
	}
	return (a+b)/3;

}