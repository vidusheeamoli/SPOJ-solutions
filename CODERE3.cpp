#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	scanf("%d", &T);
	while(T--)
	{
		int n, i, j, max;
		scanf("%d", &n);
		int a[n];
		int left[n], right[n];
		for(i=0; i<n; i++)
		{
			scanf("%d", &a[i]);
			left[i]=1;
			right[i]=1;
		}
		//traverse from left to right
		for(i=1; i<n; i++)
		{
			for(j=0; j<i; j++)
			{
				if(a[j]<a[i] && left[i]<left[j]+1)
				{
					left[i]=left[j]+1;
				}
			}
		}
		//traverse from right to left
		for(i=n-2; i>=0; i--)
		{
			for(j=n-1; j>i; j--)
			{
				if(a[j]<a[i] && right[i]<right[j]+1)
				{
					right[i]=right[j]+1;
				}
			}
		}
	/*	for(i=0; i<n; i++)
		{
			printf("%d ", left[i]);
		}
		printf("\n");
		for(i=0; i<n; i++)
		{
			printf("%d ", right[i]);
		}
		printf("\n"); */
		max=0;
		for(i=0; i<n; i++)
		{
			left[i]+=right[i];
			if(left[i]>max)
			{
				max=left[i];
			}
		}
		printf("%d\n", max-1); 
	}
	return 0;
}