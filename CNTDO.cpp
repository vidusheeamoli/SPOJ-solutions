#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
	ll T;
	scanf("%lld", &T);
	while(T--)
	{
		ll n, i, count=0;
		map<ll, ll>mymap;
		scanf("%lld", &n);
		ll a[n];
		for(i=0; i<n; i++)
		{
			scanf("%lld", &a[i]);
			mymap[a[i]]++;
		}
		for(i=0; i<n; i++)
		{
			if(a[i]%2==0)
			{
				if(mymap.find(a[i]/2)!=mymap.end())
				{
					count++;
				}
			}
		}
		printf("%lld\n", count);
	}
	return 0;
}