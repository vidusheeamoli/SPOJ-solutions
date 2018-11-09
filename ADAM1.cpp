#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(void)
{
	ll p, q, r, ans, x, y, T, count, n;
	scanf("%lld", &T);
	while(T--)
	{
		count=0;
		scanf("%lld %lld %lld", &p, &q, &r);
		scanf("%lld", &n);
		while(n--)
		{
			scanf("%lld %lld", &x, &y);
			ans=(x*x)+(y*y)-(p*x)-(q*y)+r;
			if(ans<=0)
			{
				count++;
			}
		}
		printf("%lld\n", count);
	}
	return 0;
}