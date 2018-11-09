#include <bits/stdc++.h>
using namespace std;

int main() {
	int T, j=1;
	scanf("%d", &T);
	while(T--)
	{
		printf("Case %d:\n", j++);
		int n, q, i, x, temp;
		char ty[5];
		scanf("%d", &q);
		stack<int>s, smax;
		while(q--)
		{
			scanf("%s", ty);
			if(ty[0]=='A')
			{
				scanf("%d", &x);
				s.push(x);
				if(smax.empty())
				{
					smax.push(x);
				}
				else
				{
					if(x>smax.top())
					{
						smax.push(x);
					}
					else
					{
						smax.push(smax.top());
					}
				}
			}
			else if(ty[0]=='R')
			{
				if(s.empty())
				{
					continue;
				}
				temp=s.top();
				s.pop();
				smax.pop();
			}
			else
			{
				if(smax.empty())
				{
					printf("Empty\n");
				}
				else
				{
					printf("%d\n", smax.top());
				}
			}
			
		}
	}
	return 0;
}