#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(x) x.begin(),x.end()
#define rep(i,a,b) for(int i=a;i<=b;i++)

struct Point{
   double x,y;
   Point(double x_, double y_){
      x = x_;
      y = y_;
   }
};


int main(){
   
  Point d(2.9, 7.8);
  cout << &d.x << ' ' << &d.y << ' ' << &d;


  // nhận xét hai biến x,y có địa chỉ cạnh nhau
  // biến Point d có địa chỉ là địa chỉ của biến x (biến thành phần đầu tiên được khai báo)
  return 0;
}