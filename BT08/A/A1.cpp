#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(x) x.begin(),x.end()
#define rep(i,a,b) for(int i=a;i<=b;i++)

void f(int xval){
    int x;
    x = xval;
    cout << &x << '\n';
}

void g(int yval){
    int y;
    cout << &y << '\n';
}
int main(){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    f(7);
    g(11);
    return 0;
    
}

/* giải thích: vì khi gọi hàm f thì biến địa phương x trong hàm f được lấy một vùng nhớ
và khi hàm f kết thúc thì chỉ biến x biến mất nên khi hàm g được gọi thì biến y khả năng 
cao lấy luôn địa chỉ này, cả hàm f và g đều gọi trên đỉnh stack. 
*/