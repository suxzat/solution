#include <bits/stdc++.h>

using namespace std;

int a[105];
int f[105][1000005];

int main(){
    int n, s;
    cin >> n >> s;
    for(int i=1; i<=n; i++) cin >> a[i];
    sort(a+1,a+n+1);
    int res = 0;
    int k = n;
    while(s<a[k]) k--;
    while(s>100000){
        s-=a[k];
        res++;
    }
    for(int i=0; i<=n; i++) fill(f[i],f[i]+sizeof(f[i])/sizeof(int),0x3f3f3f3f);
    for(int i=1; i<=n; i++) f[i][0]=0;
    for(int i=1; i<=n; i++)
    for(int j=1; j<=s; j++)
        if(j>=a[i]) f[i][j]=min(f[i-1][j],f[i][j-a[i]]+1);
        else f[i][j]=f[i-1][j];
    cout << f[n][s]+res << '\n';
}
