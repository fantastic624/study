#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main()
{
    int a=2703,b=1113,gcd;
    while (114514)
    {
        gcd=a%b;
        if (gcd==0)
        break;
        a=b;
        b=gcd;
    }
    cout<<b;
    
    return 0;
}
// int a,b,c,e,f,g;
//     char d;
//     cin>>a>>d>>b>>d>>c;
//     for (e = 0; e <= 1; e++)
//     {
//         if (e-1==a&&f-1==b&&g==c)
//                 break;
//         for (f = 0; f <= 59; f++)
//         {
//             if (e==a&&f-1==b&&g==c)
//                 break;
//             for (g = 0; g <= 59; g++)
//             {
//                 cout<<e<<d<<f<<d<<g<<" ";
//                 if (e==a&&f==b&&g==c)
//                 break;
//             }
            
//         }
        
//     }


// int a,b,c,d,n,all,posibilies;
//     cin>>a>>b>>c>>d>>n;
//     for (int num_a=0; num_a <= a; num_a++)
//     {
//         for (int num_b=0; num_b <= b; num_b++)
//         {
//             for (int num_c=0; num_c <= c; num_c++)
//             {
//                 for (int num_d=0; num_d <= d; num_d++)
//                 {
//                     all=1*num_a+3*num_b+5*num_c+10*num_d;
//                     if (all==n)
//                     {
//                         posibilies++;
//                         cout<<"1*"<<num_a<<"+3*"<<num_b<<"+5*"<<num_c<<"+10*"<<num_d<<endl;
//                     }
                    
//                 }
//             }
//         }
//     }
//     cout<<posibilies;




// int n,h=1;
//     cin>>n;
//     int i;
//     while (h<=n)
//     {
//         for (i=n-1; i>=h; i--)
//         {
//             cout<<" ";
            
//         }
//         for (int a=0; a < h; a++)
//         {
//                 cout<<"*";
//         }
        
//         h++;
//         cout<<endl;
//     }
    



// int hang,lie=1;
//     for ( lie = 1; lie < 10; lie++)
//     {
//         for (hang =1; hang  <= lie; hang++)
//         {
//             cout<<hang<<"x"<<lie<<"="<<hang*lie<<" ";
//         }
//         cout<<endl;
//     }