#include<bits/stdc++.h>
using namespace std;
unsigned long long gcd(unsigned long long a, unsigned long long b);
int main(void)
{
	unsigned long long a, b, c, ans;
	scanf("%llu", &a);
	scanf("%llu", &b);
	scanf("%llu", &c);
	ans=gcd(a, b);
	ans=gcd(ans, c);
	printf("%llu\n", ans);
	return 0;
}
unsigned long long gcd(unsigned long long a, unsigned long long b)
{
	if(a==0)
	{
		return b;
	}
	return gcd(b%a, a);
}