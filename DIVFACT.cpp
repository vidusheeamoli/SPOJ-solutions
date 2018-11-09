#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
#define mod 1000000007
int main() {
	ll arr[50005]={0};
	ll i, j;
	for(i=2; i<=50005; i++)
	{
		if(arr[i]==0)
		{
			for(j=i+i; j<=50005; j+=i)
			{
				arr[j]=1;
			}
		}
	}
	ll T;
	scanf("%llu", &T);
	while(T--)
	{
		ll n, ans=1, exp, p;
		scanf("%llu", &n);
		for(i=2; i<=n; i++)
		{
			if(arr[i]==0)
			{
				exp=0;
				p=i;
				while(p<=n)
				{
					exp=(exp+(n/p))%mod;
					p=p*i;
				}
				ans=(ans*(exp+1))%mod;
			}
		}
		printf("%llu\n", ans);
	}
	
	return 0;
}