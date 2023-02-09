#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int main(){
	int n; cin >> n;
	if (n % 4 == 0 && n % 100 != 0) cout << "true";
	else cout << "false";
	return 0;
}
