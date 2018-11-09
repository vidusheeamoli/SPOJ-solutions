#include<bits/stdc++.h>
#include<stdio.h>
#include<stack>
using namespace std;

int main() {
	int T, i, j, k;
	char a[410];
	scanf("%d", &T);
	while(T--)
	{
		scanf("%s", a);
		char b[410];
		stack<char>s;
		j=0;
		for(i=0; i<strlen(a); i++)
		{
			if(a[i]>=97 && a[i]<=122)
			{
				b[j++]=a[i];
			}
			else
			{
				if(a[i]!=')')
				{
				s.push(a[i]);
				}
				else
				{
					while(s.top()!='(')
					{
						b[j++]=s.top();
						s.pop();
					}
					s.pop();
				}
			}
		}
		while(!s.empty())
		{
			b[j++]=s.top();
			s.pop();
		}
		b[j]=NULL;
		printf("%s\n", b);
		
	}
	return 0;
}