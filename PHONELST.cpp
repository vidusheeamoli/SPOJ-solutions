#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	scanf("%d", &T);
	while(T--)
	{
		map<string, int>mymap;
		map<string, int>::iterator it, it1;
		int n, i;
		char str[10005];
		scanf("%d", &n);
		while(n--)
		{
			cin>>str;
			mymap[str]=1;
		}
		bool check=false;
		for(it=mymap.begin(); it!=mymap.end(); it++)
		{
			it1=it;
			it1++;
			if(it1==mymap.end())
			{
				break;
			}
			if(it->first.size() >= it1->first.size())
			{
				continue;
			}
			int a;
			a=it->first.size();
			bool temp=true;
			for(i=0; i<a; i++)
			{
				if(it->first[i]!=it1->first[i])
				{
					temp=false;
					break;
				}
			}
			if(temp)
			{
				check=true;
				break;
			}
		}
		if(check)
		{
			printf("NO\n");
		}
		else
		{
			printf("YES\n");
		}
	}
	return 0;
}