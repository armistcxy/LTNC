#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x = -1, pre = -1;
	bool ok = false;
	while (cin >> x)
	{
		if (x == -1){
			cout << pre << ' ' << -1;
			break;
		}
		if (x != pre && pre >= 0){
			cout << pre << ' ';
		}
		pre = x;
	}
}
