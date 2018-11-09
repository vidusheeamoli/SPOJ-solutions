#include<bits/stdc++.h>
using namespace std;
int findn(int n);
int main(void)
{
	int T, n, ans;
	scanf("%d", &T);
	while(T--)
	{
		scanf("%d", &n);
		ans=findn(n);
		printf("%d\n", ans);
	}
}
int findn(int n)
{
	if(n==3 || n==2)
	{
		return n;
	}
	int ans=1;
	if(n%2==0)
	{
		ans=ans+findn(n/2);
	}
	else
	{
		ans=ans+findn((n/2)+1);
	}
	return ans;
}