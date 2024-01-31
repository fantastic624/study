#include <iostream>
using namespace std;
int main()
{
    int in_month, in_date, out_days, inter_month;
    char a;
    out_days = 0;
    cin >> in_month >> a >> in_date;
    switch (in_month - 1)
    {
    case 12:
        out_days += 31;
    case 11:
        out_days += 30;
    case 10:
        out_days += 31;
    case 9:
        out_days += 30;
    case 8:
        out_days += 31;
    case 7:
        out_days += 31;
    case 6:
        out_days += 30;
    case 5:
        out_days += 31;
    case 4:
        out_days += 30;
    case 3:
        out_days += 31;
    case 2:
        out_days += 28;
    case 1:
        out_days += 31;
    }
    out_days = in_date + out_days;
    cout << out_days;
    return 0;
}