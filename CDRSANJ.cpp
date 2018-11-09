#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll isprime(ll x);
ll cfp(ll x);
int main(void)
{
	ll x, n, i, j, ans;
	scanf("%lld", &x);
	ans=cfp(x);
	printf("%lld\n", ans);
	return 0;
}
ll cfp(ll x)
{
	//printf("%lld\n", x);
	ll i, sq;
	if(x==0)
	{
		return 0;
	}
	else if(x==1)
	{
		return 1;
	}
	else if(x==2)
	{
		return 2;
	}
	else if(x%2==0)
	{
		return cfp(2)+cfp(x/2);
	}
	else if(x%2==1 && isprime(x))
	{
		return 0;
	}
	else
	{
		sq=sqrt(x);
		for(i=3; i<=sq; i++)
		{
			if(x%i==0)
			{
				break;
			}
		}
		return cfp(i)+cfp(x/i);
	}
}
ll isprime(ll x)
{
	ll sq, i;
	sq=sqrt(x);
	for(i=2; i<=sq; i++)
	{
		if(x%i==0)
		{
			return 0;
		}
	}
	return 1;
}