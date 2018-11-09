#include <stdio.h>
 
int main(void) {
	int T, a;
	unsigned long long r;
	long double s;
	scanf("%d", &T);
	for(a=1; a<=T; a++)
	{
		scanf("%llu", &r);
		s=(4*r*r)+0.25;
		printf("Case %d: %0.2Lf\n", a, s);
	}
	return 0;
}
