#include <bits/stdc++.h>
using namespace std;

int duyet[8][2]{{-1,-1},{-1, 0},{-1, 1},
                { 0,-1},        { 0, 1},
                { 1,-1},{ 1, 0},{ 1, 1},};

int a[1002][1002]{0};
int b[1002][1002]{0};
int n, m;

bool check(int x, int y){
    b[x][y]=1;
    int res=1;
    int ne=a[x][y];
    for(int i=0; i<8; i++){
        int nox=x+duyet[i][0];
        int noy=y+duyet[i][1];
        if(nox<1 || nox>n || noy<1 || noy>m) continue;
        if(ne <a[nox][noy]) res=0;
        if(ne==a[nox][noy] && !b[nox][noy]) res*=check(nox,noy);
    }
    return res;
}

int main(){
    cin >> n >> m;
    for(int i=1; i<=n; i++)
    for(int j=1; j<=m; j++)
        cin >> a[i][j];
    int d=0;
    for(int i=1; i<=n; i++)
    for(int j=1; j<=m; j++)
        if(!b[i][j]) d+=check(i,j);
    cout << d;
}
