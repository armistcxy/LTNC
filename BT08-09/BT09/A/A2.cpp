#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(x) x.begin(),x.end()
#define rep(i,a,b) for(int i=a;i<=b;i++)

int main(){
   int* p = new int;
   int* p2 = p;
   *p = 10;
   delete p; 
   *p2 = 100; // gán giá trị vào vùng nhớ đã bị xóa 
   cout << *p2;
   delete p2; // không gian vùng nhớ đã được giải phóng trước đó, việc ta cố xóa có thể gây 
   // ra lỗi undefined behavior 
   return 0;
}