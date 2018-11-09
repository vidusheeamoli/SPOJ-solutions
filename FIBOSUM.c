//find the Nth fibonacci term, then calculate the fibosum by f(n+2)-1
#include <stdio.h>
unsigned long long fib(unsigned long long n);
void power(unsigned long long m[2][2], unsigned long long n);
void mult(unsigned long long m[2][2], unsigned long long arr[2][2]);
int main(void) {
	unsigned long long T, n, n1, p, q, r;
	scanf("%llu", &T);
	while(T--)
	{
		scanf("%llu %llu", &n, &n1);
		p=fib(n1+2); 
		q=fib(n+1);
		r=(p-q+1000000007)%1000000007;
	//	printf("%d %d  ", p, q);
		printf("%d\n", r);
	}
	return 0;
}
unsigned long long fib(unsigned long long n)
{
	unsigned long long m[2][2]={{1, 1}, {1, 0}};
	if(n==0)
	{
	
		return 0;
	}
	else
	{
		power(m, n-1);
		return m[0][0];
	}
}
void power(unsigned long long m[2][2], unsigned long long n)
{
	unsigned long long arr[2][2]={{1, 1}, {1, 0}};
	if(n==0 || n==1)
	{
		return;
	}
	power(m, n/2);
	mult(m, m);
	if(n%2!=0)
	{
		mult(m, arr);
	}
	
}
void mult(unsigned long long m[2][2], unsigned long long arr[2][2])
{
    int x, y, z, w;
    x =  (m[0][0]*arr[0][0] + m[0][1]*arr[1][0])%1000000007;
    y =  (m[0][0]*arr[0][1] + m[0][1]*arr[1][1])%1000000007;
    z =  (m[1][0]*arr[0][0] + m[1][1]*arr[1][0])%1000000007;
    w =  (m[1][0]*arr[0][1] + m[1][1]*arr[1][1])%1000000007;
    m[0][0]=x;
    m[0][1]=y;
    m[1][0]=z;
    m[1][1]=w;
}









