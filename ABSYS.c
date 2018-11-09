
#include<stdio.h>
#include<string.h>
int func(char);
int main(void)
{
    int t, p, q, r, s, u, i;
    char a, b;
    char x[1000000000], y[1000000000], z[1000000000];
    scanf("%d", &t);
    while(t--)
    {
        r=0; s=0;
        scanf("%s %c %s %c %s", x, &a, y, &b, z);
        if(strstr(x, "machula")==NULL && strstr(y, "machula")==NULL)
        {
			p=strlen(x);
			q=strlen(y);
			for(i=0; i<p; i++)
			{
				r=r*10+(x[i]-'0');
			}
			for(i=0; i<q; i++)
            {
                s=s*10+(y[i]-'0');
            }
            u=r+s;
            printf("%s + %s = %d\n", x, y, u);
        }
        else
        {
            if(strstr(x, "machula")==NULL)
            {
                p=strlen(x);
                for(i=0; i<p; i++)
                {
                    r=r*10+(x[i]-'0');
                }
                q=strlen(z);
                for(i=0; i<q; i++)
                {
                    s=s*10+(z[i]-'0');
                }
                u=s-r; 
                printf("%s + %d = %s\n", x, u, z);
                
            }
            else
            {
                p=strlen(y);
                for(i=0; i<p; i++)
                {
                    r=r*10+(y[i]-'0');
                }
                q=strlen(z);
                for(i=0; i<q; i++)
                {
                    s=s*10+(z[i]-'0');
                }
                u=s-r; 
                printf("%d + %s = %s\n", u, y, z);
            }
        }
    }
}

