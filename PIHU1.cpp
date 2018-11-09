#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll bs(ll a[], ll l, ll r, ll x);
int main() {
	ll T;
	scanf("%lld", &T);
	while(T--)
	{
		bool check=false;
		ll n, i, j, p, x, temp;
		scanf("%lld", &n);
		ll a[n];
		for(i=0; i<n; i++)
		{
			scanf("%lld", &a[i]);
		}
		scanf("%lld", &p);
		sort(a, a+n);
		for(i=0; i<n; i++)
		{
			for(j=i+1; j<n; j++)
			{
				x=a[i]+a[j];
				x=p-x;
				temp=bs(a, 0, n-1, x);
				if(temp!=-1 && temp!=i && temp!=j)
				{
					check=true;
					break;
				}
			}
			if(check)
			{
				break;
			}
		}
		if(check)
		{
			printf("YES\n");
			continue;
		}
		printf("NO\n");
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