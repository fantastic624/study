#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char a[100]={0};
    int count=0;

    fgets(a,100,stdin);
    for (int i = 0; i <100 ; i++)
    {
        if ((a[i]-'A'>=0)&&('Z'-a[i]>=0))
        count++;
    }
    cout<<count<<endl;
    cout<<a<<endl;
    return 0;
}