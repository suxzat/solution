#include <bits/stdc++.h>

using namespace std;

int a[1001];
int f[1001][1001];

int main(){
    int n, k, s=0;
    cin >> n >> k;
    for(int i=1; i<=n; i++){
        cin >> a[i];
        a[i]%=k;
        s+=a[i];
    }
    memset(f,0x3f,sizeof(f)); f[0][0]=0;
    for(int i=1; i<=n; i++)
    for(int j=0; j< k; j++)
        f[i][j]=min(f[i-1][j],f[i-1][(j+k-a[i])%k]+1);
    cout << n-f[n][s%k];
}
