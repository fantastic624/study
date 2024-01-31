#include <iostream>
using namespace std;
int main()
{
    int yearf, monthf, dayf, yeart, montht, dayt, days, num;
    cin >> yearf >> monthf >> dayf >> yeart >> montht >> dayt;
    days = 30 + (monthf == 1 || monthf == 3 || monthf == 5 || monthf == 7 || monthf == 8 || monthf == 10 || monthf == 12) - dayf;
    if (monthf == 2)
        days = 28 + (yearf % 4 == 0 && yearf % 100 != 0 || yearf % 400 == 0) - dayf;
    monthf++;
    for (;;)
    {
        if (monthf > 12)
        {
            monthf = 1;
            yearf++;
        }
        if (monthf == montht && yearf == yeart)
            break;
        num = 30 + (monthf == 1 || monthf == 3 || monthf == 5 || monthf == 7 || monthf == 8 || monthf == 10 || monthf == 12);
        if (monthf == 2)
            num = 28 + (yearf % 4 == 0 && yearf % 100 != 0 || yearf % 400 == 0);
        days = num + days;
        monthf++;
    }
    days = days + dayt;
    cout << days+1;
    return 0;
}