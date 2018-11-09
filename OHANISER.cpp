#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
ll poww(ll a, ll b);
int main() {
	ll i, T, n, ans;
	scanf("%lld", &T);
	for(i=1; i<=T; i++)
	{
		scanf("%lld", &n);
		if(n==1)
		{
			printf("Case %lld: 1\n", i);
		}
		else
		{
			ans=((n+1)*poww(2, n-2))%mod;
			printf("Case %lld: %lld\n", i, ans);
		}
	}
	return 0;
}
ll poww(ll a, ll b)
{
	ll ans=1;
	a=a%mod;
	while(b>0)
	{
		if(b&1)
		{
			ans=(ans*a)%mod;
		}
		b=b>>1;
		a=(a*a)%mod;
	}
	return ans%mod;
}