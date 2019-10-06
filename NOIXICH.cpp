#include <bits/stdc++.h>

using namespace std;

vector<int> v;

int main(){
	int n;
	cin >> n;
	if(n==2){
		cout << 1;
		return 0;
	}
	for(int i=0; i<n; i++){
		v.push_back(0);
		cin >> v[i];
	}
	std::sort(v.begin(),v.end());
	int d=n-1, k=n-1;
	for(int i=0; ; ++i){
		if(k>v[i]){
			k=k-v[i]-1;
			--d;
		}
		else break;
	}
	cout << d;
}
