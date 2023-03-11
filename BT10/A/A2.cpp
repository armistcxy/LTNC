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

void print_1(Point p){
   cout << &p;
}

void print_2(Point &p){
   cout << &p;
}

int main(){
  Point d(2.3,7.6);
  print_1(d);
  cout << '\n';
  print_2(d);
  return 0;
}