#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
	ll n, i, j, max;
	scanf("%lld", &n);
	ll a[n], lis[n];
	for(i=0; i<n; i++)
	{
		scanf("%lld", &a[i]);
		lis[i]=1;
	}
	for(i=1; i<n; i++)
	{
		max=0;
		if(a[i]<0)
		{
			for(j=0; j<i; j++)
			{
				if(a[j]>0 && a[j]<abs(a[i]) && lis[i] < lis[j]+1)
				{
					if(lis[j]>max)
					{
						max=lis[j];
					}
				}
			}
		}
		else
		{
			for(j=0; j<i; j++)
			{
				if(a[j]<0 && abs(a[j])<a[i] && lis[i] < lis[j]+1)
				{
					if(lis[j]>max)
					{
						max=lis[j];
					}
				}
			}
		}
		lis[i]+=max;
	}
	max=-1;
	for(i=0; i<n; i++)
	{
		if(lis[i]>max)
		{
			max=lis[i];
		}
	}
	printf("%lld\n", max);
	return 0;
}