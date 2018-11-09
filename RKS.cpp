#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool sortfunc(const pair<pair<ll,ll>, ll> &a,  const pair<pair<ll,ll>, ll> &b) 
{
	if(a.first.first==b.first.first)
	{
		return (a.first.second < b.first.second);
	}
	return (a.first.first > b.first.first); 
} 

int main() {
	ll n, c, i, j, k;
	map<ll, ll>m;
	map<ll, ll>m1; //first occurence
	scanf("%lld %lld", &n, &c);
	for(i=0; i<n; i++)
	{
		scanf("%lld", &j);
		m[j]++;
		if(m1.find(j)==m1.end())
		{
			m1[j]=i;
		}
	}
	vector<pair<pair<ll, ll>, ll>>v; // <freq, occurence>, number 
	for(auto it=m.begin(); it!=m.end(); it++)
	{
		v.push_back(make_pair(make_pair(it->second, m1.find(it->first)->second), it->first));
	}
	sort(v.begin(), v.end(), sortfunc);
	n=v.size();
	for(i=0; i<n; i++)
	{
		j=v[i].first.first;
		for(k=0; k<j; k++)
		{
			printf("%lld ", v[i].second);
		}
	}
	printf("\n");
	return 0;
}