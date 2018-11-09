#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll anarc(ll n, ll k);
int main(void)
{
	ll T, n, d, ans, check=1;
	while(check==1)
	{
		scanf("%lld %lld", &n, &d);
		if(n==0 && d==0)
		{
			check=0;
			break;
		}
		ans=anarc(n, d);
		printf("%lld %lld %lld\n", n, d, ans);
	}
}
ll anarc(ll n, ll d)
{
	if(n==1)
	{
		return 1;
	}
	else
	{
		return (anarc(n-1, d)+d-1)%n+1;
	}
}