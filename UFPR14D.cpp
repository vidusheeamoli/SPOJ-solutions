#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
	ll n, sum, q, i, x, y;
	scanf("%lld", &n);
	ll a[n];
	for(i=0; i<n; i++)
	{
		scanf("%lld", &a[i]);
	}
	scanf("%lld", &q);
	while(q--)
	{
		scanf("%lld %lld", &x, &y);
		sum=0;
		for(i=x-1; i<y; i++)
		{
			sum+=a[i];
		}
		printf("%lld\n", sum);
	}
	return 0;
}