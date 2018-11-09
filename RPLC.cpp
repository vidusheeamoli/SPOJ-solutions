#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
	long long sum, n, T, i, j, temp;
	scanf("%lld", &T);
	for(j=1; j<=T; j++)
	{
		scanf("%lld", &n);
		ll a[n];
		for(i=0; i<n; i++)
		{
			scanf("%lld", &a[i]);
		}
		sum=0;
		temp=0;
		for(i=0; i<n; i++)
		{
			if(a[i]>=0)
			{
				temp+=a[i];
			}
			else
			{
				if(abs(a[i])<=temp)
				{
					temp+=a[i];
				}
				else
				{
					sum-=temp+a[i];
					temp=0;
				}
			}
		}
		printf("Scenario #%lld: %lld\n", j, sum+1);
	}
	return 0;
}