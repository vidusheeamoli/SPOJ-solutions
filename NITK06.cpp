#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	scanf("%d", &T);
	while(T--)
	{
		int n, i, j;
		scanf("%d", &n);
		int a[n];
		for(i=0; i<n; i++)
		{
			scanf("%d", &a[i]);
		}
		for(i=0; i<n-1; i++)
		{
			j=min(a[i], a[i+1]);
			a[i]-=j;
			a[i+1]-=j;
		}
		bool check=true;
		for(i=0; i<n; i++)
		{
			if(a[i]!=0)
			{
				check=false;
				break;
			}
		}
		if(check)
		{
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}
	}
	return 0;
}