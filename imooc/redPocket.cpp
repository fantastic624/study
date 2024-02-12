#include <iostream>
using namespace std;
int main()
{
    int pocketNum,lastNum=0;
    float pocketMoney,lastAverage=0,lastMoney=0;
    label1:
    cin>>pocketNum>>pocketMoney;
    int iPocketMoney=pocketMoney*100;
    if (pocketMoney/pocketNum<0.01)
    {
       goto label1;
    }
    float a[pocketNum];
    int b[pocketNum];
    srand((unsigned)time(0));
    lastMoney=pocketMoney;
    lastAverage=pocketMoney/pocketNum;
    lastNum=pocketNum;
    for (int i = 0; i < pocketNum-1; i++)
    {
        b[i]= rand() % iPocketMoney + 1;
        a[i]=b[i];
        a[i]=a[i]/100;
        if (a[i]>2*lastAverage||a[i]==0)
        {
            i--;
            continue;
        }
        lastMoney=lastMoney-a[i];
        lastNum--;
        lastAverage=lastMoney/lastNum;
    }
    a[pocketNum-1]=lastMoney;
    for (int q = 0; q < pocketNum; q++)
    {
        printf("%.2f",a[q]);
        cout<<endl;
    }
    return 0;
}