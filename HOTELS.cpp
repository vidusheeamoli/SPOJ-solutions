#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
	ll n, m, i, sum, j, max;
	scanf("%lld %lld", &n, &m);
	ll a[n];
	for(i=0; i<n; i++)
	{
		scanf("%lld", &a[i]);
	}
	sum=0;
	max=0;
	j=0;
	for(i=0; i<n; i++)
	{
		if(sum<max && max<m)
		{
			sum=max;
		}
		max=max+a[i];
		if(max==m)
		{
			sum=max;
			break;
		}
		else
		{
			while(max>m)
			{
				max=max-a[j];
				if(max==m)
				{
					sum=max;
					break;
				}
				j++;
			}
		}
	}
	printf("%lld\n", sum);
	return 0;
}