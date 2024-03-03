#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char s1[50]={'0'},s2[50]={'0'};
    int n1[50]={0},n2[50]={0};
    cin>>s1>>s2;
    int q=strlen(s1),w=strlen(s2),a=0,b=0;
    if (q>=w)
    {
        b=q;
    }
    else
    b=w;
    for (int i = q-1; i >= 0 ; i--)
    {
        n1[i]=s1[a]-'0';
        a++;
    }
    a=0;
    for (int i = w-1; i >= 0 ; i--)
    {
        n2[i]=s2[a]-'0';
        a++;
    }


    for (int e = 0; e < b; e++)
    {
        n1[e]=n1[e]+n2[e];
        if (n1[e]>9)
        {
            n1[e]=n1[e]-10;
            n1[e+1]++;
        }
    }

    for (int r = 50; r >=0; r--)
    {
        if (n1[r]!=0)
        {
            for (int t = r; t >=0; t--)
            {
                cout<<n1[t];
            }
            break;
        }
        
    }
    
    
    
    return 0;
}