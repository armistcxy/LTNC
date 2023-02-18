#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(x) x.begin(),x.end()
#define rep(i,a,b) for(int i=a;i<=b;i++)
int get_day_by_month(int month, int year)
{
    switch (month) {
    case 1 | 3 | 5 | 7 | 8 | 10 | 12: 
        return 31;
        break;
    case 2:
        return ( (year % 4 ==0) ? 29 : 28); 
    default: return 30;
    }
}

string convert_to_format (int day, int month, int year)
{
    string dd = to_string(day);
    if (dd.length() == 1) dd = "0" + dd;

    string mm  = to_string(month);
    if (mm.length() == 1) mm = "0" + mm;

    string yyyy = to_string(year);
    if (yyyy.length() < 4) for (int i = 1; i <= 4 - yyyy.length(); i++) yyyy = "0" + yyyy;

    return dd + "-" + mm + "-" + yyyy;

}
int main(){
#ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("ouput.txt","w",stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s; cin >> s;
    int day_c = stoi(s.substr(0,2));
    int month_c = stoi(s.substr(3,2));
    int year_c = stoi(s.substr(6));
    int k; 
    while (cin >> k)
    {   
        int day = day_c;
        int month = month_c;
        int year = year_c;
        if (k == 0) break;
        while (k > 0)
        {
            if (k >= get_day_by_month(month,year) - day + 1)
            {
                k -= get_day_by_month(month,year) - day + 1;
                month++;
                if (month == 13){
                    year++;
                    month = 1;
                }
                day = 0;
            }
            else if (k < get_day_by_month(month,year) - day + 1)
            {
                day += k;
                k = 0;
            }
        }

        while (k < 0)
        {
            if (-k >= day)
            {
                k += day;
                month--;
                if (month == 0){
                    year--;
                    month = 12;
                }
                day = get_day_by_month(month,year) + 1;
            }
            else if (-k < day)
            {
                day += k;
                k = 0;
            }
        }
        cout << convert_to_format(day,month,year) << '\n';

    }

}