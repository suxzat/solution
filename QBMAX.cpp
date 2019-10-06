#include <bits/stdc++.h>
#define INF 0x3f3f3f3f
using namespace std;

int a[105][105], b[105][105]{0};

int main(){
	//freopen("inp.txt","r",stdin);
	//freopen("ans.txt","w",stdout);
	int n, m;
	cin >> n >> m;
	for(int i=0; i<105; i++)
		fill(b[i],b[i]+105,-INF);
	for(int i=1; i<=n; i++)
	for(int j=1; j<=m; j++){
		cin >> a[i][j];
		if(j==1) b[i][j]=a[i][j];
	}
	for(int j=2; j<=m; j++)
	for(int i=1; i<=n; i++)
		b[i][j]=a[i][j]+max(b[i][j-1],max(b[i-1][j-1],b[i+1][j-1]));
	int mx = -INF;
	for(int i=1; i<=n; i++)
		mx=max(mx,b[i][m]);
	cout << mx;
}
