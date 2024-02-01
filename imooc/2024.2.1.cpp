#include<iostream>
#include<cstring>
#include<ctime>
#include<cstdlib>
using namespace std;
int main()
{
    int buy[6]={0},num[10]={0},z=0,s;
    for (int i = 1; i < 5; i++)
    {
        cin>>buy[i];
    }
    srand((unsigned)time(0));
    for (int  q = 0; q < 5; q++)
    {
        s=rand() % 10 + 1;
        if (num[s]==1)
        {
            q--;
            continue;
        }
        num[s]=1;
    }
    for (int w = 1; w <= 5; w++)
    {
        if (num[buy[w]+1]==1)
        {
            z++;
        }
        
    }
    for (int e = 1; e <=10; e++)
    {
        if (num[e]==1)
        {
            cout<<e<<" ";
        }
        
    }
    cout<<endl;
    switch (z)
    {
    case 5:
        cout<<"5";
        break;
    case 4:
        cout<<"4";
        break;
    case 3:
        cout<<"3";
        break;
    default:
        cout<<"thank you";
        break;
    }
    
    return 0;
}
    // int n;
    // cin>>n;
    // int a[100];
    // for ( int b=1; b <=n; b++)
    // {
    //     a[b]=b;
    // }
    // for (int i =1; i <=n; i++)
    // {
    //     if (a[i]%5!=0)
    //     {
    //         cout<<a[i];
    //         cout<<" ";
    //     }
        
    // }