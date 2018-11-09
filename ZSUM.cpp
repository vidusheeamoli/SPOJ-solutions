#include <bits/stdc++.h>
using namespace std;
#define mod 10000007
typedef long long ll;
ll poww(ll a, ll b);
int main() {
	ll n, k, ans, a, b, c, d;
	while(1)
	{
		scanf("%lld %lld", &n, &k);
		if(n==0 && k==0)
		{
			break;
		}
		a=(2*poww(n-1, k))%mod;
		b=(2*poww(n-1, n-1))%mod;
		c=poww(n, k);
		d=poww(n, n);
		ans=(a+b+c+d+mod)%mod;
		printf("%lld\n", ans);
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
	    	b=b/2;
		a=(a*a)%mod;
	    }
	    return ans;
}