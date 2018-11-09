#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(void)
{
	ll i, n, T, res, x, y, sum, minn;
	scanf("%lld", &T);
	while(T--)
	{
		scanf("%lld", &n);
		ll a[n];
		for(i=0; i<n; i++)
		{
			scanf("%lld", &a[i]);
		}
		sum=0;
		for(i=0; i<n; i++)
		{
			sum+=a[i];
		}
		x=0;
		res=1000000005;
		for(i=0; i<n; i++)
		{
			y=sum-x-a[i];
			minn=2*min(x, y)+max(x, y);
			res=min(res, minn);
			x=x+a[i];
		}
		printf("%lld\n", res);
	}
	return 0;
}