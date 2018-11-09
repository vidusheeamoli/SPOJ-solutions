#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;

#define maxsize 1100001
#define mod 100000
static int fibNum[maxsize];
/*
bool compare(int a,int b)
{
	return a>b;
}
*/
int main(void)
{
	ll T, n, i, a, b, k, count, max;
	fibNum[0] = 0;
	fibNum[1] = 1;
	//finding all the fibo number unti 1100000
	for(ll i = 2; i < maxsize; i++) fibNum[i] = (fibNum[i-1]%mod + fibNum[i-2]%mod)%mod;


	vector <ll> v; 
	scanf("%lld", &T);
	for(k=1; k<=T; k++)
	{
		scanf("%lld %lld", &a, &b);
		for(i=a-1; i<=a+b-1; i++)
		{
			n=fibNum[i]%mod;
			v.push_back(n);
		}
	//	sort(v.begin(), v.end());
		max=v[0];
		for(i=1; i<v.size(); i++)
		{
			if(v[i]>max)
			{
				max=v[i];
			}
		}
		ll arr[max+1]={0};
		//memset(arr, 0, max*sizeof(ll));
	/*	for(i=0; i<=max; i++)
		{
			printf("%lld rtir", arr[i]);
		}
		printf("\n"); */
		for(i=0; i<v.size(); i++)
		{
			arr[v[i]]++;
		}
		v.clear();
		for(i=0; i<=max; i++)
		{
			while(arr[i])
			{
				v.push_back(i);
				arr[i]--;
			}
		}
		printf("Case %lld: ", k);
		for(i=0; i<v.size() && i<100; i++)
		{
			printf("%lld ", v[i]);
		}
		printf("\n");
		v.clear(); 
/*
		count=1;
		make_heap(v.begin(),v.end(),compare);
		printf("Case %lld:", k);
		while(count <= 100 && v.size())
		{
			pop_heap(v.begin(),v.end(),compare);
			printf(" %lld",v.back());
			v.pop_back();
			count++;
		}
		printf("\n");
		*/
	}
	return 0;
}
