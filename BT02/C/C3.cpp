#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n; cin >> n;
	for (int i = 0; i < n; i++)
	{
		int a = 2*n - 1;
		for (int j = 1; j <= a; j++)
		{
			if (j >= n - i && j <= n + i) cout << "*";
			else cout << " "; 
		}
		if (i != n-1) cout << '\n';
	}
}
