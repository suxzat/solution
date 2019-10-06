#include <bits/stdc++.h>

using namespace std;

int a[1001], b[1001];
int f[1001][1001]{0};

int main(){
	//freopen("inp.txt","r",stdin );
	//freopen("ans.txt","w",stdout);
	int n, m;
	cin >> n >> m;
	for(int i=1; i<=n; i++) cin >> a[i];
	for(int i=1; i<=m; i++) cin >> b[i];
	for(int i=1; i<=n; i++)
	for(int j=1; j<=m; j++){
		f[i][j]=max(f[i-1][j],f[i][j-1]);
		if(a[i]==b[j]) f[i][j]=max(f[i][j],f[i-2][j-2]+1);
	}
	cout << f[n][m];
}
