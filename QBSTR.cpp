#include <bits/stdc++.h>
 
using namespace std;
 
int f[2001][2001]{0};
 
int main(){
	int n, m;
	string a, b;
	cin >> a >> b;
	n=a.size(); m=b.size();
	a=' '+a; b=' '+b;
	for(int i=1; i<=n; i++)
	for(int j=1; j<=m; j++){
		if(a[i]==b[j]) f[i][j]=f[i-1][j-1]+1;
		else f[i][j]=max(f[i-1][j],f[i][j-1]);
	}
	cout << f[n][m];
} 
