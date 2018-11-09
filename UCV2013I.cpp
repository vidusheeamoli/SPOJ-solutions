#include <bits/stdc++.h>
using namespace std;
#define M_PI   3.14159265358979323846264338327950288
int main() {
	int n, r;
	while(1)
	{
		scanf("%d %d", &r, &n);
		if(n==0 && r==0)
		{
			break;
		}
		double ans;
		ans=(1.0*r)/sin(M_PI/(2.0*n));
		printf("%.2lf\n", ans);
	}
	return 0;
}