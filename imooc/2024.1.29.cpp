#include <iostream>
using namespace std;
int main()
{
    int geshu = 0, shunow = 2, shushu = 2, daoshu = 0,yushu,yu2,shiwei,gewei;

    for (shushu; shushu <= shunow; shushu++)
    {
        if (shunow>50)
        break;
        yushu=shunow%shushu;
       if (shushu!=shunow&&yushu==0)
       {
           shunow++;
           shushu=2;
           continue;
       }
       if (shushu==shunow&&yushu==0)
        {
            yu2=shunow%10;
            shunow=shunow/10;
            daoshu==10*yu2+shunow;
            shushu=2;
            for (shushu; shushu <= daoshu; shushu++)
            {
                yushu=daoshu%shushu;
                if (shushu!=daoshu&&yushu==0)
                {
                    shushu=2;
                    break;
                }
                if (shushu==daoshu&&yushu==0)
                {
                    geshu++;
                    break;
                }
            }
            shunow++;
           shushu=2;
        }
    }
    cout<<geshu;
    return 0;
}