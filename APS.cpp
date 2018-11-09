#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
int a[10000000]={0};
int main() {
	ll i, j, n, T, sq;
	//sieve 
	for(i=2; i<=10000000; i++)
	{
		if(a[i]==0)
		{
			for(j=2*i; j<=10000000; j+=i)
			{
				if(a[j]==0)
				{
					a[j]=i;
				}
			}
		}
	}
	/*
	for(i=2; i<10; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n"); */
	ll arr[10000000];
	arr[0]=0;
	arr[1]=0;
	for(i=2; i<10000000; i++)
	{
		if(a[i]==0)
		{
			arr[i]=arr[i-1]+i;
		}
		else
		{
			arr[i]=arr[i-1]+a[i];
		}
	}
	scanf("%lld", &T);
	while(T--)
	{
		scanf("%lld", &n);
		printf("%lld\n", arr[n]);
	}
	return 0;
}