#include <iostream>
#include<cstdio>
using namespace std;
typedef long long ll;
int main() {
	ll z=1;
	while(1)
	{
		ll n, q, x, i, count, ans, tempx;
		scanf("%lld", &n);
		if(n==-1)
		{
			return 0;
		}
		ll c[n+1];
		for(i=0; i<n+1; i++)
		{
			scanf("%lld", &c[i]);
		}
		scanf("%lld", &q);
		printf("Case %lld:\n", z);
		while(q--)
		{
			scanf("%lld", &x);
			ans=0;
			tempx=1;
			for(i=0; i<=n; i++)
			{
				ans+=(tempx*c[n-i]);
				tempx*=x;
			}
			printf("%lld\n", ans);
		}
		z++;
	}
	return 0;
}