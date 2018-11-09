#include <bits/stdc++.h>
using namespace std;
int a[10000005]={0};
int main() {
	int i, j, T, n, k;
	vector <int> v;
	for(i=2; i<=35000; i++)
	{
		if(a[i]==0)
		{
			v.push_back(i);
			k=0;
			for(j=i+1; j<=35000; j++)
			{
				if(a[j]==0)
				{
					k++;
				}
				else if(a[i]==1)
				{
					continue;
				}
				if(k==i)
				{
					a[j]=1;
					k=0;
				}
			}
		}
	}
	while(1)
	{
		scanf("%d", &n);
		if(n==0)
		{
			break;
		}
		printf("%d\n", v[n-1]);
	}
	return 0;
}