#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, k, i, j;
	scanf("%d %d", &k, &n);
	int wt[n], val[n];
	for(i=0; i<n; i++)
	{
		scanf("%d %d", &val[i], &wt[i]);
	}
	int dp[k+1];
	memset(dp, 0, (k+1)*sizeof(int));
	for(i=0; i<n; i++) 
	{
	        for(j=k; j>=wt[i]; j--)
	        {
	            dp[j] = max(dp[j] , val[i]+dp[j-wt[i]]);
	        }
	}
	printf("%d\n", dp[k]);
	return 0;
}