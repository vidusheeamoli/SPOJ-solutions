#include <bits/stdc++.h>
using namespace std;
#define pb push_back
int sol(map<tuple<int ,int ,int > , int > &mp , int i , int j , int k , string &a , string &b){
    if(k == 0)
        return 0;
    if(i == -1 || j == -1)
        return -1;
    auto it = mp.find(make_tuple(i , j , k));
    if(it!=mp.end())
        return it->second;
    int first = -1;
    if(a[i] == b[j]){
        first = sol(mp , i-1 , j-1 , k-1 , a , b);
        if(first != -1)
            first += a[i];
    }
    int sec = -1 , thd = -1;
    sec = sol(mp , i-1 , j , k , a , b);
    thd = sol(mp , i , j-1 , k , a , b);
    mp[make_tuple(i , j , k)] = max(first , max(sec , thd));
    return max(first , max(sec , thd));
}
int main(){

    int t;
    cin>>t;
    while(t--){
        string a , b ;
        int k;
        cin>>a>>b>>k;
        map<tuple<int , int , int > , int > mp;
        int res = sol(mp , a.size() -1 , b.size()-1 , k , a , b);
        if(res == -1)
            cout<<0<<endl;
        else
            cout<<res<<endl;
    }
    return 0;
}