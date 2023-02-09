// suppose that the card Bob has known is A and another card is B
// if A>50 then choose A, else choose B
// explain : if A > 50 then win percent is > 0.5, else if A < 50 then B has more than 50 percent to win 
// so the expected value of win matches is > n * 0.5 => Good strategy
#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int main(){
	int number_of_guess;
	cin >> number_of_guess;
	
	int cnt = 0 // count win matches
	while (number_of_guess --){
		int x,y; // x is number Bob choose
		cin >> x >> y;
		if (x>y) cnt++;
	}
	cout << cnt << '\n';
	return 0;
}
