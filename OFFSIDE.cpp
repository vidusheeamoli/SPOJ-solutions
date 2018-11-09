#include<bits/stdc++.h>
using namespace std;
int main(){
    int m,n,i,j;
    while(1){
        scanf("%d %d",&m,&n);
        if(m==0 && n==0)
           break;
        int ar[m],br[n];
        for(i=0;i<m;i++)
            scanf("%d",&ar[i]);
        for(i=0;i<n;i++)
            scanf("%d",&br[i]);
        sort(ar,ar+m);
        sort(br,br+n);
        if(ar[0]<br[1]){
            printf("Y\n");
        }else{
            printf("N\n");
     }
    }
    return 0;
}