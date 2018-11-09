#include<bits/stdc++.h>
using namespace std;
long long gcd(long long a, long long b);
int main(void)
{
	long long a, b, n, x, y, g;
	scanf("%lld", &n);
	while(n--)
	{
		scanf("%lld %lld", &a, &b);
		g=gcd(a, b);
		x=b/g;
		y=a/g;
		printf("%lld %lld\n", x, y);
	}
	return 0;
}
long long gcd(long long a, long long b)
{
	if(a==0)
	{
		return b;
	}
	return gcd(b%a, a);
}