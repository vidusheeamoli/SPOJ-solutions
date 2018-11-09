#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long n,k=1;
        int i=1,j=1;
        scanf("%ld",&n);
        while(k<n)
        {
            j++,k++;
            if(k==n) break;

            while(j>1&&k<n)
                i++,j--,k++;
            if(k==n) break;

            i++,k++;
            if(k==n) break;

            while(i>1&&k<n)
                i--,j++,k++;

        }
        printf("TERM %d IS %d/%d\n",n,i,j);
    }
    return 0;
}
