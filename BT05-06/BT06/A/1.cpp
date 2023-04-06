#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(x) x.begin(),x.end()
#define rep(i,a,b) for(int i=a;i<=b;i++)


void f(int a[]){
    cout << &a << ' ' << &a[0];
}
int main(){
#ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("ouput.txt","w",stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int arr[5] = {1,2,3,4,5};
    cout << &arr << ' ' << &arr[0] << '\n';
    f(arr);
}

// Thực chất là truyền địa chỉ của phần tử đầu tiên của mảng