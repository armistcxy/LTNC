#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(x) x.begin(),x.end()
#define rep(i,a,b) for(int i=a;i<=b;i++)
// lỗi 3:
int *weird_sum(int a, int b){
   int c; 
   c = a + b;
   return &c;
}
int main(int argc, const char * argv[]){
   // lỗi đầu tiên: Con trỏ pX có thể chứa dữ liệu rác, nghiêm trọng hơn là 
   // gây ra segmentation faults (cố truy nhập, ghi đè vào các vùng nhớ không cho phép
   // truy cập)
   int *pX;
   printf("%d\n",pX);
   printf("%d\n",*pX);
   *pX = 0;

   // lỗi 2 : truy nhập con trỏ NULL (nullptr)
   // không thể gán giá trị vì pY đang không trỏ tới một vùng nào trong bộ nhớ cả
   int *pY = NULL;
   printf("%d\n",pY);
   printf("%d\n",*pY);
   *pY = 0; 

   // lỗi 3: dangling reference (cố truy nhập tới vùng nhớ không còn hợp lệ)
   cout << weird_sum(3,4);

   // lỗi 4: Gán giá trị cho vùng nhớ chỉ đọc (read-only location)
   int a = 20;
   const int* pA = &a;
   *pA = 25;

   // lỗi 5: Gán giá trị cho hằng con trỏ
   int b = 25;
   int* const pB = &b;
   pB = NULL;

   // lỗi 6: Hiểu nhầm "biến" mảng là con trỏ
   char str[5] = "Hello";

   str = NULL;

   
   return 0;

}