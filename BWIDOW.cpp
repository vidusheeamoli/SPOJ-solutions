#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(void)
{
	ll n, i, j, T, check, max, max2;
	scanf("%lld", &T);
	while(T--)
	{
		scanf("%lld", &n);
		ll a[n];
		ll b[n];
		for(i=0; i<n; i++)
		{
			scanf("%lld %lld", &a[i], &b[i]);
		}
		//inner radius a, j
		max=a[0];
		j=0;
		for(i=1; i<n; i++)
		{
			if(a[i]>max)
			{
				max=a[i];
				j=i;
			}
		}
		check=0;
		max2=0;
		for(i=0; i<n; i++)
		{
			if(i==j)
			{
				continue;
			}
			if(b[i]>max2)
			{
				max2=b[i];
			}
		}
		if(max>max2)
		{
			printf("%lld\n", j+1);
		}
		else
		{
			printf("-1\n");
		}
	}
	return 0;
}