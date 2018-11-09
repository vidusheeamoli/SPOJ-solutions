#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
	ll T;
	scanf("%lld", &T);
	for(ll t=1; t<=T; t++)
	{
		ll n, i, j, ans;
		scanf("%lld", &n);
		ll a[n];
		for(i=0; i<n; i++)
		{
			scanf("%lld", &a[i]);
		}
		sort(a, a+n);
		ans=n;
		j=n-1;
		for(i=n-1; i>=0; i--)
		{
			if(a[j]>=2*a[i])
			{
				ans--;
				j--;
			}
		}
		printf("Case %lld: %lld\n", t, ans);
	}
	return 0;
}