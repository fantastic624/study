#include <iostream>
#include <cstring>
using namespace std;
int main()
{
//     int n,l;
//     cin>>n;
//     l=n;
//     int a,b[1000]={0};
//     for ( int i = 1; i <=n; i++)
//     {
//         cin>>a;
//         if (b[a]==0)
//         {
//             b[a]++;
//         }
//         else
//         l--;
//     }
//     cout<<l<<endl;
//     for (int r = 1; r <= 1000; r++)
//     {
//         for (int t = 1; t <=b[r]; t++)
//         {
//             cout<<r<<" ";
//         }
        
//     }
    int a[4]={80,90,30,10};
    int t=0;
    for (int i = 0; i < 4; i++)
    {
        int w=a[i],r=i;
        for (int q = i; q < 4; q++)
        {
            if (w>a[q])
            {
                r=q;
                w=a[q];
            }
        }
        if (i!=r)
        {
            t=a[i];
            a[i]=w;
            a[r]=t;
        }
        
        
    }
    for (int e = 0; e < 4; e++)
    {
        cout<<a[e]<<endl;
    }
    
    return 0;
}