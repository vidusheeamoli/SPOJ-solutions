#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll bs(ll a[], ll j, ll n);
int main() {
	while(1)
	{
		ll n, i, j, k, cnt;
		scanf("%lld", &n);
		if(n==0)
		{
			return 0;
		}
		vector<ll>a;
		vector<ll>::iterator up;
		for(i=0; i<n; i++)
		{
			scanf("%lld", &j);
			a.push_back(j);
		}
		sort(a.begin(), a.end());
		cnt=0;
		for(i=0; i<n; i++)
		{
			for(j=i+1; j<n; j++)
			{
				up=upper_bound(a.begin(), a.end(), a[i]+a[j]);
				if(up!=a.end())
				{
					k=up-a.begin();
					cnt+=(n-k);
				}
			}
		}
		printf("%lld\n", cnt);
	}
	return 0;
}