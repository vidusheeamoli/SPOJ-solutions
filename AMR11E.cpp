#include <bits/stdc++.h>
using namespace std;


int main() {
	int T, n, i, j;
	int arr[3500]={0};
	vector<int>v;
	for(i=2; i<3500; i++)
	{
		if(arr[i]==0)
		{
			for(j=2*i; j<=3500; j=j+i)
			{
				arr[j]++;
			}
		}
	}
	for(i=0; i<3500; i++)
	{
		if(arr[i] >= 3)
		{
			v.push_back(i);
		}
	}
	scanf("%d", &T);
	while(T--)
	{
		scanf("%d", &n);
		printf("%d\n", v[n-1]);
	}
	return 0;
}