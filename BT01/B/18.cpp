#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int main(){
	double x1,y1,x2,y2; cin >> x1 >> y1 >> x2 >> y2;
	double res = sqrt((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2));
	cout << res << '\n';
	return 0;
}
