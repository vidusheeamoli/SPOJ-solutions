#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(void)
{
	ll n, i, j, k, nn, ans=0, low, high;
	scanf("%lld", &n);
	ll a[n];
	for(i=0; i<n; i++)
	{
		scanf("%lld", &a[i]);
	}
	vector <long long int> v1;
	vector <long long int> v2;
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			for(k=0; k<n; k++)
			{
					v1.push_back(a[i]*a[j]+a[k]);
			}
		}
	}
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			for(k=0; k<n; k++)
			{
					if(a[k]==0)
					{
						continue;
					}
					v2.push_back((a[i]+a[j])*a[k]);
			}
		}
	}
	sort(v1.begin(), v1.end());
	sort(v2.begin(), v2.end());
//	nn=v1.size();




/*
	for(i=0; i<v1.size(); i++)
    {
    	printf("%lld ", v1[i]);
    }
    printf("\n");
    for( i=0; i<v2.size(); i++)
    {
    	printf("%lld ", v2[i]);
    }
printf("\n");
*/



	for(i=0; i<v1.size(); i++)
	{
		low=lower_bound(v2.begin(), v2.end(), v1[i])-v2.begin();
		high=upper_bound(v2.begin(), v2.end(), v1[i])-v2.begin();
		ans=ans+(high-low);
	}
	printf("%lld\n", ans);
	return 0;
}