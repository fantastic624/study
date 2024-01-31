#include <iostream>
using namespace std;
int main()
{
    char a,b;
    int c=0,d=0,i=1,max=0;
    while (i<=6)
    {
        cin>>a;
        if ('A'<=a&&'Z'>=a)
        {
            if (c>=max)
            {
                max=c;
                b=a;
            }
            i++;
            c=0;
        }
        else
        c=c*10+a;
    }
    cout<<b;
    return 0;
}