#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int main(){
	int n; cin >> n;
	int x;
	double ave = 0;
	int mx = 0, mn = INT_MAX;
	for (int i = 1; i <= n; i++){
		cin >> x;
		ave += x;
		mx = max(x,mx);
		mn = min(x,mn);
	}	
	ave /= n;
	cout << ave << '\n' << mx << '\n' << mn;
	return 0;
}
