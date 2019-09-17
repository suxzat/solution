#include <bits/stdc++.h>

using namespace std;

void f(int n){
    if(n==2) cout << "12";
    else if(n==3) cout << "1232";
    else if(n==4) cout << "123432";
    else if(n==5) cout << "12345432";
    else if(n==6) cout << "1234565432";
    else if(n==7) cout << "123456765432";
    else if(n==8) cout << "12345678765432";
    else if(n==9) cout << "1234567898765432";
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    //freopen("inp.txt","r",stdin );
    //freopen("ans.txt","w",stdout);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        if(n==1) cout << "1";
        else if(n==2) cout << "121";
        else if(n==3) cout << "12321";
        else if(n==4) cout << "1234321";
        else if(n==5) cout << "123454321";
        else if(n==6) cout << "12345654321";
        else if(n==7) cout << "1234567654321";
        else if(n==8) cout << "123456787654321";
        else if(n==9) cout << "12345678987654321";
        else {
            for(int i=1; i<=n/9; i++){
                cout << "1234567";
                if(i==n/9 && n%9==0) cout << "8";
                else cout << "9";
                if(i!=n/9 || n%9) cout << "0";
            }
            f(n%9);
            for(int i=1; i<=n/9-1; i++){
                if(i!=1 || n%9) cout << "0";
                cout << "98765432";
            }
            if(n/9) cout << "0";
            cout << "987654321";
        }
        cout << '\n';
    }
}
