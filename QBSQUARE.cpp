#include <bits/stdc++.h>
using namespace std;
int m,n;
int a[1004][1004];
int f[1004][1004]{0};
 
void init(){
    //freopen("inp.txt", "r", stdin);
    //freopen("ans.txt", "w", stdout);
}
 
void doc(){
    scanf("%d %d", &m, &n);
    for (int i=1;i<=m;i++){
        for (int j =1;j<=n;j++){
            scanf("%d" ,&a[i][j]);
            f[i][j] = f[i-1][j] + f[i][j-1] - f[i-1][j-1] + a[i][j];
            //cout<<f[i][j]<< " ";
        }
       // cout<<endl;
    }
}
 
void xuly(){
    int t, s;
    t = min(n,m);
    for (int k = t; k>=1    ; k--)
    for (int i = 1; i<=m-k+1; i++)
    for (int j = 1; j<=n-k+1; j++)
    if(a[i][j]==a[i+k-1][j+k-1]){
        s = f[i+k-1][j+k-1] - f[i-1][j+k-1] - f[i+k-1][j-1] + f[i-1][j-1];
        if (s == k*k || s == 0){
            cout << k;
            exit(0);
        }
    }
}
 
int main(){
    ios::sync_with_stdio(false); cin.tie(0);
    init();
    doc();
    xuly();
} 
