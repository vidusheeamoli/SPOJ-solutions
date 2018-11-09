#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
	ll i, n, T;
	scanf("%lld", &T);
	while(T--)
	{
		scanf("%lld", &n);
		ll a[n];
		ll b[n];
		for(i=0; i<n; i++)
		{
			scanf("%lld", &a[i]);
		}
		sort(a, a+n);
		b[0]=a[0];
		b[1]=max(a[1]+a[0], a[1]*a[0]);
		for(i=2; i<n; i++)
		{
			b[i]=max(b[i-1]+a[i], b[i-2]+(a[i-1]*a[i]));	
		}
		printf("%lld\n", b[n-1]);
	}
	
	return 0;
}