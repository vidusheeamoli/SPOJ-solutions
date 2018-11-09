#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll bs(ll a[], ll l, ll r, ll x);
int main() {
	while(1)
	{
		ll n, i, sum=0, ans=0, x, y;
		scanf("%lld", &n);
		if(n==-1)
		{
			return 0;
		}
		ll a[n-1];
		for(i=0; i<n-1; i++)
		{
			scanf("%lld", &a[i]);
			sum+=a[i];
		}
		sort(a, a+(n-1));
		if(sum%(n-1)==0)
		{
			x=sum/(n-1);
			if(bs(a, 0, n-2, x)==-1 && x<a[n/2] && x>a[(n/2)-1])//(x<a[n/2] && x>a[(n/2)-1])
			{
				ans++;
			}
		}
		y=a[n/2];
		x=n*y-sum;
		if(bs(a, 0, n-2, x)==-1 && x>y)
		{
			ans++;
		}
		y=a[(n/2)-1];
		x=n*y-sum;
		if(bs(a, 0, n-2, x)==-1 && x<y)
		{
			ans++;
		}
		printf("%lld\n", ans);
	}
	return 0;
}
ll bs(ll a[], ll l, ll r, ll x)
{
	while(r>=l)
	{
		ll mid=(l+r)/2;
		if(x==a[mid])
		{
			return mid;
		}
		if(x<a[mid])
		{
			return bs(a, l, mid-1, x);
		}
		return bs(a, mid+1, r, x);
	}
	return -1;
}