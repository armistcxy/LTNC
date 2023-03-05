#include <bits/stdc++.h>
using namespace std;
bool check(int n){
	string s = to_string(n);
	string temp = s;
	reverse(s.begin(),s.end());
	return (s == temp);
}
int main() {
	int t; cin >> t;
	while (t--){
		int a, b; cin >> a >> b;
		int cnt = 0;
		for (int i = a; i<=b; i++){
			if (check(i)) cnt++;
		} 
		cout << cnt << '\n';
	}

}