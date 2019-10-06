#include <bits/stdc++.h>

using namespace std;

int a[1000], f[1000];

int main(){
    int n, mx=0;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> a[i];
        for(int j=i; j>=0; j--)
            if(a[i]>a[j])
                f[i]=max(f[i],f[j]+1);
        mx=max(f[i],mx);
    }
    cout << mx + 1;
}
