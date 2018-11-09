#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
	ll n, k, t, f, T, X, ans;
	scanf("%lld", &T);
	while(T--)
	{
		scanf("%lld %lld %lld %lld", &n, &k, &t, &f);
		X=(f-n)/(k-1);
		ans=n+(X*k);
		printf("%lld\n", ans);
	}
	return 0;
}