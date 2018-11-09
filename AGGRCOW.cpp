#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int numcows(ll mid, ll cow, ll a[], ll n);
int main() {
	ll T, i, n, c;
	scanf("%lld", &T);
	while(T--)
	{
		scanf("%lld %lld", &n, &c);
		ll a[n];
		for(i=0; i<n; i++)
		{
			scanf("%lld", &a[i]);
		}
		sort(a, a+n);
		ll start=0, end, mid;
		end=a[n-1];
		while(start<end)
		{
			mid=(start+end)/2;
			if(numcows(mid, c, a, n))
			{
				start=mid+1; //higher values of mid 
			}
			else
			{
				end=mid; //lower calues of mid
			}
		}
		printf("%lld\n", start-1);
	}
	return 0;
}
int numcows(ll mid, ll cow, ll a[], ll n)
{
	ll i, j, count=1; //count 1 because 1 cow is placed at 0th index!!!
	j=a[0];
	for(i=1; i<n; i++)
	{
		if(a[i]-j>=mid)
		{
			count++;
			j=a[i];
		}
		if(count==cow)
		{
			return 1;
		}
	}
	return 0;
}