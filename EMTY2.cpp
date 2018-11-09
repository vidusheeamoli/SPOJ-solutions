#include <bits/stdc++.h>
using namespace std;

int main() {
	char a[120005];
	long int T, n, i, k, len;
	scanf("%ld", &T);
	for(k=1; k<=T; k++)
	{
		stack <char> s;
		scanf("%s", a);
		len=strlen(a);
		for(i=0; i<len; i++)
		{
			s.push(a[i]);
			if(s.top()=='0')
			{
				s.pop();
				if(!s.empty() && s.top()=='0')
				{
					s.pop();
					if(!s.empty() && s.top()=='1')
					{
						s.pop();
					}
					else
					{
						s.push('0');
						s.push('0');
					}
				}
				else
				{
					s.push('0');
				}
			}
		}
		if(s.empty())
		{
		printf("Case %ld: yes\n", k);
		}
		else
		{
			printf("Case %ld: no\n", k);
		}
		stack<char>().swap(s);
	}
	return 0;
}