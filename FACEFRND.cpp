#include <bits/stdc++.h>
using namespace std;

int main() {
	map<int, int>mymap;
	map<int, int>:: iterator it;
	int n, m, p, temp, i, j, nn;
	scanf("%d", &n);
	nn=n;
	int arr[n];
	j=0;
	while(nn--)
	{
		scanf("%d", &m);
		arr[j++]=m;
		scanf("%d", &p);
		for(i=0; i<p; i++)
		{
			scanf("%d", &temp);
			mymap.insert(pair<int, int> (temp, 1));
		}
	}
	for(i=0; i<n; i++)
	{
	//	printf("%d ", arr[i]);
		if(mymap.find(arr[i])!=mymap.end())
		{
			mymap.erase(arr[i]);
		}
	}
/*	for(it=mymap.begin(); it!=mymap.end(); it++)
	{
		printf("%d\n", it->first);
	} */
	printf("%d\n", mymap.size());
	return 0;
}