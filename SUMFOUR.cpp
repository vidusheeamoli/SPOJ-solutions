#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(void)
{
	ll i, j, k, l, n, ans;
	scanf("%lld", &n);
	ll a[n], b[n], c[n], d[n];
	for(i=0; i<n; i++)
	{
		scanf("%lld %lld %lld %lld", &a[i], &b[i], &c[i], &d[i]);
	}
	vector <ll> v1, v2;
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			v1.push_back(a[i]+b[j]);
			v2.push_back(c[i]+d[j]);
		}
	}
	sort(v1.begin(), v1.end());
	sort(v2.begin(), v2.end());
	ans=0;
	k=v1.size();
	for(i=0; i<k; i++)
	{
		l=0-v1[i];
		ans=ans+(upper_bound(v2.begin(), v2.end(), l)-lower_bound(v2.begin(), v2.end(), l));
	}
	printf("%lld\n", ans);
	return 0;
}