#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    int in_num;
    double in_age,out_age_=0;
    cin>>in_num;
    for ( int i = 1; i <=in_num; ++i)
    {
        cin>>in_age;
        out_age_=out_age_+in_age;
    }
    printf("%.4lf",out_age_/in_num);
    return 0;
}
/*
    int b,d=0;
    cin>>b;
    while (b!=0)
    {
        d=d*10+b%10;
        b=b/10;
    }
    cout<<d;


    int a,b,c;
    cin>>a>>b;
    c=a+(a%2==0);
    for (c;c<=b;c=c+2)
    cout<<c<<" ";
    cout<<endl;
    if (a%2==1)
    a++;
    for (a;a<=b;a=a+2)
    cout<<a<<" ";


    int in_age,in_num;
    double out_age_=0;
    cin>>in_num;
    for ( int i = 1; i <=in_num; ++i)
    {
        cin>>in_age;
        out_age_=out_age_+in_age;
    }
    printf("%.2lf",out_age_/in_num);
*/