#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int main(){
	int n; 
	while (cin >> n){
		if (n == -1) {
			cout << "Bye";
			break;
		}
		cout << ((n >= 0 && n % 5 == 0) ? n / 5 : - 1) << '\n';
	}
	return 0;
}
