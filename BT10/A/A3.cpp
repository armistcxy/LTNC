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

Point mid_point(const Point& a1, const Point& a2){
   Point a_mid((a1.x + a2.x) / 2, (a1.y + a2.y) / 2);
   return a_mid;
}

int main(){

  Point d(2.3,7.6);
  Point e(3.5,8.2);

  Point mid_p = mid_point(d,e);
  cout << mid_p.x << ' ' << mid_p.y;
  return 0;
}