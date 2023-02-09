#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int main(){
	double weight, height; cin >> weight >> height;
	double BMI_index = weight/(height * height);
	cout << BMI_index << '\n';
	return 0;
}
