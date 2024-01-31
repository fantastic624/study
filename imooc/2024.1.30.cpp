#include<iostream>
using namespace std;
int main()
{
    int n,z=0,s,j;
    cin>>n;
    int a[n],c[6]={100,50,10,5,2,1};
    for (int i = 0; i < n; i++)
        cin>>a[i];
    for (int b = 0; b < n; b++)
    {
        s=a[b];
        for ( j= 0; j < 6; j++)
        {
            z=z+s/c[j];
            s=s%c[j];
        }
    }
    cout<<z;
    return 0;
}
//  int n;
//     cin>>n;
//     int a[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin>>a[i];
//     }
//     int y=n-1,x=0;
//     for ( x ; x < n; x++)
//     {
//         if (a[x]!=a[y])
//         {
//             break;
//         }
//         y--;
//     }
//     if (x<(n-1))
//     cout<<"NO";
//     else
//     cout<<"YES";