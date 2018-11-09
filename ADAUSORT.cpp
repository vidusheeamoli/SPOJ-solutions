#include <bits/stdc++.h>
using namespace std;

bool sortfunc(const pair<int,int> &a,  const pair<int,int> &b) 
{
	if(a.first==b.first)
	{
		return (a.second > b.second);
	}
	return (a.first < b.first); 
} 

int main() {
	int n, i, j;
	vector<pair<int, int>>v;
	scanf("%d", &n);
	for(i=1; i<=n; i++)
	{
		scanf("%d", &j);
		v.push_back(make_pair(j, i));
	}
	sort(v.begin(), v.end(), sortfunc);
	for(i=0; i<n; i++)
	{
		printf("%d ", v[i].second);
	}
	printf("\n");
	return 0;
}