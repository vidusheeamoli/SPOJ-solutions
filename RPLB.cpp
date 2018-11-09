#include <bits/stdc++.h>
using namespace std;

int main() {
	int T, t;
	scanf("%d", &T);
	for(t=1; t<=T; t++)
	{
		int n, k, i, j;
		scanf("%d %d", &n, &k);
		int a[n];
		for(i=0; i<n; i++)
		{
			scanf("%d", &a[i]);
		}
		int dp[n+1][k+1];
		for(i=0; i<=n; i++)
		{
			for(j=0; j<=k; j++)
			{
				if(i==0 || j==0)
				{
					dp[i][j]=0;
					continue;
				}
				if(j < a[i-1]) //a[i-1] would not contribute
				{
					dp[i][j]=dp[i-1][j];
				}
				else if(i>=2)
				{
					dp[i][j]=max(dp[i-1][j], a[i-1]+dp[i-2][j-a[i-1]]);
				}
				else
				{
					if(j<a[i-1])
					{
						dp[i][j]=0;
					}
					else
					{
						dp[i][j]=a[i-1];
					}
				}
			}
		}
		printf("Scenario #%d: %d\n", t, dp[n][k]);
	}
	return 0;
}