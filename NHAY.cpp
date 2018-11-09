#include <bits/stdc++.h>
using namespace std;

int main() {
	long long n, i;
	char a[1000005];
	char b[1000005];
	while(scanf("%lld", &n)!=EOF)
	{
		scanf("%s", a);
		scanf("%s", b);
		char *p=strstr(b, a);
		while(p!=NULL)
		{
			*p='A';
			i=p-b;
			printf("%lld\n", i);
			p=strstr(b, a);
		}
		printf("\n");
	}
	return 0;
}