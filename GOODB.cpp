#include<cstdio>
#include<iostream>
#include<string>
#include<cstdlib>
#include<queue>
#include<stack>
#include<utility>
#include<string>
#include<cstring>
#include<set>
#include<cmath>
#include<vector>
#include<fstream>
#include<map>
#include<list>
#include<algorithm>
#define MOD 1000000007

typedef long long int LLD;
typedef unsigned long long int LLU;

using namespace std;

LLD r[101];

LLD mod_power(LLD a, LLD n, LLD mod){

    // returns (a^n) % mod.
    // '%' represents modulus operation.

    LLD y = 1;
    while(n){
        if(n & 1)
            y = (y * a) % mod;
        a = (a * a) % mod;
        n >>= 1;
    }
    return y;
}

LLD inverse(LLD num){

    // returns the inverse of num w.r.t. (10^9 + 7).
    // uses the property a^(-1) mod p = a^(p-2) mod p.
    return mod_power(num, MOD - 2, MOD);
}

LLD find_ncr_mod(LLD n, LLD r){

    // returns the value of nCr mod (10^9 + 7).

    r = min(r, n-r);
    if(n == 0 || n == 1 || r == 0)
        return 1;

    // find numerator mod (10^9 + 7).
    LLD num = 1;
    for(LLD i = n;i >= n-r+1;i--)
        num = (num * i) % MOD;

    // find denominator mod (10^9 + 7).
    LLD den = 1;
    for(LLD i=2;i<=r;i++)
        den = (den * i) % MOD;

    // find the inverse of obtained denominator w.r.t. (10^9 + 7).
    den = inverse(den);

    // multiply numerator and inverse of denominator and return the result.
    LLD res = (num * den) % MOD;
    return res;
}

int main(){
 
    LLD n, w, t, r, res;
    scanf("%lld%lld%lld%lld", &n, &w, &t, &r);

    // find nCw.
    res = find_ncr_mod(n, w);
    n -= w;

    // find (n-w)Ct and multiply with previous value found.
    res = (find_ncr_mod(n, t) * res) % MOD;
    n -= t;

    // find (n-w-t)Cr and multiply with previous value found.
    res = (find_ncr_mod(n, r) * res) % MOD;
    printf("%lld\n", res);
    return 0;

}