#include<bits/stdc++.h>
using namespace std;
int main(void)
{
	int T;
	scanf("%d", &T);
	while(T--)
	{
		long double a, b, c, d, s, ans;
		scanf("%Lf %Lf %Lf %Lf", &a, &b, &c, &d);
		s=(a+b+c+d)/2;
		a=s-a;
		b=s-b;
		c=s-c;
		d=s-d;
		ans=sqrt(a*b*c*d);
		printf("%.2Lf\n", ans);
	}
}