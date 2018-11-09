#include<bits/stdc++.h>

#define LL long long int

using namespace std;

int main(void)
{
        //int T;
        //T=1;
        //cin>>T;
        char s[500]={},res[500]={};
        
        while(scanf("%s",s)!=EOF)
        {
                int index=0,status = 0,cplus=0,java=0;
                int l=strlen(s);
                for(int i=0;i<l;i++)
                {
                        if(i==0 && ((s[i]=='_')||((s[i]>=65)&&(s[i]<=90))))
                        {
                                status = 1;
                                break;
                        }
                        else if(i==(l-1) && (s[i]=='_'))
                        {
                                status = 1;
                                break;
                        }
                        else if(s[i]>=65 && s[i]<=90)
                        {
                                if(cplus)
                                {
                                        status = 1;
                                        break;
                                }
                                java=1;
                                res[index++]='_';
                                res[index++]=s[i]+32;
                        }
                        else if(s[i]=='_')
                        {
                                i++;
                                cplus = 1;
                                if(java)
                                {
                                        status = 1;
                                        break;
                                }
                                if(s[i]>=97 && s[i]<=122)
                                {
                                        res[index++]=s[i]-32;
                                }
                                else
                                {
                                        status=1;
                                        break;
                                }
                        }
                        else
                                res[index++]=s[i];
                }
                res[index]='\0';
                if(status == 0)
                        printf("%s\n",res);
                else
                        printf("Error!\n");
        }
        return 0;
}