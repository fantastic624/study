#include <iostream>
using namespace std;
int main()
{
    int a,b=0,c=0,d;//输入1个整数a，123
    cin>>a;
    d=a;
    do
    {
        b=a%10;//b=3，a=123
        c=c*10+b;
        a=a/10;//a=12
    } while (a>0);
    if (c==d)
    cout<<"YES";
    else 
    cout<<"NO";
    
    return 0;
}