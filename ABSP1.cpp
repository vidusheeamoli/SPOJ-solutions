#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
	ll T;
	scanf("%lld", &T);
	while(T--)
	{
		ll n, i, sum, ans;
		scanf("%lld", &n);
		ll a[n];
		sum=0;
		for(i=0; i<n; i++)
		{
			scanf("%lld", &a[i]);
			sum+=a[i];
		}
		ans=0;
		for(i=n-1; i>=0; i--)
		{
			sum-=a[i];
			ans+=abs(sum-(i*a[i]));
		}
		printf("%lld\n", ans);
	}
	return 0;
}