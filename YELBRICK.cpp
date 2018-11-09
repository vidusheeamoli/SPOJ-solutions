#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
struct a
{
	ll l;
	ll w;
	ll h;
};
ll gcd(ll a, ll b);
int main(void)
{
	ll max, n, i, count=0, vol;
	while(1)
	{
		count=0;
		scanf("%lld", &n);
		if(n==0)
		{
			break;
		}
		struct a box[n];
		for(i=0; i<n; i++)
		{
			scanf("%lld %lld %lld", &box[i].l, &box[i].w,  &box[i].h);
		}
		max=gcd(box[0].l, box[0].w);
		max=gcd(max, box[0].h);
		for(i=1; i<n; i++)
		{
			max=gcd(max, box[i].l);
			max=gcd(max, box[i].w);
			max=gcd(max, box[i].h);
		}
		vol=max*max*max;
		for(i=0; i<n; i++)
		{
			count=count+(box[i].l * box[i].w * box[i].h)/(vol); 
		}
		printf("%lld\n", count);
	}
	return 0;
}
ll gcd(ll a, ll b)
{
	if(a==0)
	{
		return b;
	}
	return gcd(b%a, a);
}
