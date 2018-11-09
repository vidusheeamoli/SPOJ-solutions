#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll gcd(ll a, ll b)
{
	if(a==0)
	{
		return b;
	}
	return gcd(b%a, a);
}
int main() {
	ll i, T, a, b, c, g, k;
	scanf("%lld", &T);
	for(k=1; k<=T; k++)
	{
		scanf("%lld %lld %lld", &a, &b, &c);
		g=gcd(a, b);
		//g=gcd(g, c);
		if(c%g==0)
		{
			printf("Case %lld: Yes\n", k);
		}
		else
		{
			printf("Case %lld: No\n", k);
		}
	}
	return 0;
}