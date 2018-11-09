#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(void)
{
	ll T, n, x, y, min, i, m;
	scanf("%lld", &T);
	while(T--)
	{
		scanf("%lld",  &n);
		ll a[n];
		for(i=0; i<n; i++)
		{
			scanf("%lld", &a[i]);
		}
		scanf("%lld", &m);
		ll b[m];
		for(i=0; i<m; i++)
		{
			scanf("%lld", &b[i]);
		}
		sort(a, a+n);
		sort(b, b+m);
		x=0;
		y=0;
		min=abs(a[0]-b[0]);
		while(x<n && y<m)
		{
			if(abs(a[x]-b[y])<min)
			{
				min=abs(a[x]-b[y]);
			}
			if(a[x]<b[y])
			{
				x++;
			}
			else
			{
				y++;
			}
		}
		printf("%lld\n", min);
	}
}