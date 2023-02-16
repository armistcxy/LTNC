#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n; cin >> n;
	int mx = INT_MAX, my = INT_MAX;
	for (int i = 1; i <= n; i++)
	{
		int a,b; cin >> a >> b;
		mx = min(mx,a), my = min(my,b);
	}
	cout << mx * my;
}
