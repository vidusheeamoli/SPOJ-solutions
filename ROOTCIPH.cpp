#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	scanf("%d", &T);
	while(T--)
	{
		long long a, b, c, n;
		scanf("%lld %lld %lld", &a, &b, &c);
		n=(a*a)-(2*b);
		printf("%lld\n", n);
	}
	return 0;
}