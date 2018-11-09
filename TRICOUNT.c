#include <stdio.h>
int main(void)
{int t, a;unsigned long long n, b;scanf("%d", &t);for(a=0; a<t; a++){scanf("%llu", &n);b=(n*(n+2)*(2*n+1))/8;printf("%llu\n", b);}return 0;}
