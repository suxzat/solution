#include <bits/stdc++.h>

using namespace std;

int rev(int i){
    stringstream ss;
    ss << i;
    string s = ss.str();
    reverse(s.begin(),s.end());
    return stoi(s);
}

int GCD(int a, int b){
    if(!(a%b)) return b;
    return GCD(b,a%b);
}

int main(){
    int a, b, c=0;
    cin >> a >> b;
    for(int i=a; i<=b; i++)
        if(GCD(i,rev(i))==1) c++;
    cout << c;
}
