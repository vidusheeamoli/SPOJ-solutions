#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
bool isprime(ll a);
int main() {
	ll T, n, i, j;
	ll ans[250000]; //ans[i] will contain number of prime numbers  less than or equal to i 
	ans[0]=0;
	ans[1]=0;
	for(i=2; i<250000; i++)
	{
		if(isprime(i))
		{
			ans[i]=ans[i-1]+1;
		}
		else
		{
			ans[i]=ans[i-1];
		}
	}
	ll arr[41];
	arr[0]=1;
	arr[1]=1;
	arr[2]=1;
	arr[3]=1;
	for(i=4; i<=40; i++)
	{
		arr[i]=arr[i-1]+arr[i-4];
	}
	scanf("%lld", &T);
	while(T--)
	{
		scanf("%lld", &n);
		printf("%lld\n", ans[arr[n]]);
	}
	return 0;
}
bool isprime(ll a)
{
	ll sq, i;
	sq=sqrt(a);
	for(i=2; i<=sq; i++)
	{
		if(a%i==0)
		{
			return false;
		}
	}
	return true;
}