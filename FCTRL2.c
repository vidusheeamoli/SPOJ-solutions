#include<stdio.h>
int main(void)
{
int t, a, n, b, c=1, d, e, f, i, g=1, j;
scanf("%d", &t);
for(a=0; a<t; a++)
{
	int fac[170]={1};
    scanf("%d", &n);
    e=0;
    f=0;
    for(b=2; b<=n; b++)
    {
        for(j=0; j<g; j++)
        {
            c=fac[j]*b+f;
            fac[j]=c%10;
            f=c/10;
        }
        while(f)
        {
            g=g+1;
            fac[g-1]=f%10;
            f=f/10;
        }

    }
    for(i=g-1; i>=0; i--)
    {
     printf("%d", fac[i]);
    }
    printf("\n");
    g=1;
}

return 0;
}