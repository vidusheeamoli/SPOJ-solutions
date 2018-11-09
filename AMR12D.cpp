#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	scanf("%d", &T);
	while(T--)
	{
		string a, b;
		cin>>a;
		b=a;
		reverse(a.begin(), a.end());
		if(b==a)
		{
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}
	}
	return 0;
}