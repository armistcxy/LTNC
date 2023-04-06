#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){

   int *p = new int;
   int n = 5;
   p = &n;
   delete p;
   // lỗi ở chỗ ta cố gắng delete một đối tượng chưa được cấp phát
   return 0;
}