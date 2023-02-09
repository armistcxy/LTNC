#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int main(){
	int x,y,z; cin >> x >> y >> z;
	bool b;
	if ((x < y && y <z) || (x > y && y > z)) b = true;
	else b = false;
	cout << b << '\n';
	return 0;
}
