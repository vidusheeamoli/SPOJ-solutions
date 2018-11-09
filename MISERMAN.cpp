#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
	ll n, m, i, j, temp, ans;
	scanf("%lld %lld", &n, &m);
	ll a[n][m];
	for(i=0; i<n; i++)
	{
		for(j=0; j<m; j++)
		{
			scanf("%lld", &a[i][j]);
		}
	}
	for(i=1; i<n; i++)
	{
		for(j=0; j<m; j++)
		{
			if(j==0)
			{
				a[i][j]+=min(a[i-1][j], a[i-1][j+1]);
				continue;
			}
			if(j==m-1)
			{
				a[i][j]+=min(a[i-1][j], a[i-1][j-1]);
				continue;
			}
			temp=min(a[i-1][j], a[i-1][j-1]);
			a[i][j]+=min(temp, a[i-1][j+1]);
		}
	}
	ans=a[n-1][0];
	for(i=1; i<m; i++)
	{
		if(a[n-1][i]<ans)
		{
			ans=a[n-1][i];
		}
	}
	printf("%lld\n", ans);
	return 0;
}