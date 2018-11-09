#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, k, i, j, max;
	scanf("%d", &n);
	int a[n];
	for(i=0; i<n; i++)
	{
		scanf("%d", &a[i]);
	}
	scanf("%d", &k);
	for(i=0; i<=n-k; i++)
	{
		max=a[i];
		for(j=1; j<k; j++)
		{
			if(a[i+j]>max)
			{
				max=a[i+j];
			}
		}
		printf("%d ", max);
	}
	printf("\n");
	return 0;
}