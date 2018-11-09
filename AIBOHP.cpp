#include <bits/stdc++.h>
using namespace std;
int findMinInsertionsDP(char str[], int n); 
int main() {
	int T;
	scanf("%d", &T);
	while(T--)
	{
		int n, i, j, k;
		char a[100005];
		scanf("%s", a);
		n=strlen(a);
		k=findMinInsertionsDP(a, n);
		cout<<k<<endl;
		/*
		int dp[n][n];
		memset(dp, 0, sizeof(dp));
		for(k=1; k<n; ++k)
		{
			for(i=0, j=k; j<n; ++i, ++j)
			{
				if(a[i]==a[j])
				{
					dp[i][j]=min(dp[i][j-1], dp[i+1][j]+1);
				}
				else
				{
					dp[i][j]=dp[i+1][j-1];
				}
			}
		}
		printf("%d\n", dp[0][n-1]); */
	}
	return 0;
}


int findMinInsertionsDP(char str[], int n) 
{ 
    // Create a table of size n*n. table[i][j] 
    // will store minimum number of insertions  
    // needed to convert str[i..j] to a palindrome. 
    int table[n][n], l, h, gap; 
  
    // Initialize all table entries as 0 
    memset(table, 0, sizeof(table)); 
  
    // Fill the table 
    for (gap = 1; gap < n; ++gap) 
        for (l = 0, h = gap; h < n; ++l, ++h) 
            table[l][h] = (str[l] == str[h])? 
                          table[l+1][h-1] : 
                          (min(table[l][h-1],  
                           table[l+1][h]) + 1); 
  
    // Return minimum number of insertions for 
    // str[0..n-1] 
    return table[0][n-1]; 
} 