#include <bits/stdc++.h>
#define bignum string
using namespace std;

bignum operator+(bignum a, bignum b){
    while(a.size()<b.size()) a='0'+a;
    while(b.size()<a.size()) b='0'+b;
    int n=a.size(), ms=0;
    bignum c;c.resize(n);
    for(int i=n-1; i>=0; i--){
        c[i]=a[i]+b[i]+ms-'0';
        if(c[i]>'9'){
            c[i]=c[i]-10;
            ms=1;
        } else ms=0;
    }
    if(ms==1) c='1'+c;
    return c;
}

bignum f[101];

int main(){
    ios::sync_with_stdio(0); cin.tie(NULL);
    f[0]=f[1]="1";
    for(int i=2; i<=100; i++)
        f[i]=f[i-1]+f[i-2];
    int T, i;
    cin >> T;
    while(T--){
        cin >> i;
        cout << f[i] << '\n';
    }
}
