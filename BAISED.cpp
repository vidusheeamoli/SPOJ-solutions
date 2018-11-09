#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
	ll n, T, i, ans, temp;
	char aa[10000005];
	scanf("%lld", &T);
	while(T--)
	{
		scanf("%lld", &n);
		ll a[n];
		for(i=0; i<n; i++)
		{
			scanf("%s", aa);
			scanf("%lld", &a[i]);
		}
		sort(a, a+n);
		/*
		for(i=0; i<n; i++)
		{
			printf("%lld ", a[i]);
		}
		printf("\n"); */
		ans=0;
		for(i=0; i<n; i++)
		{
			temp=(i+1)-a[i];
			if(temp>=0)
			{
				ans=ans+temp;
			}
			else
			{
				ans=ans-temp;
			}
		}
		printf("%lld\n", ans);
		
	}
	return 0;
}