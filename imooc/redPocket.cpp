#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    int pocketNum,lastNum=0;
    float pocketMoney,lastAverage=0,lastMoney=0;
    label1:
    cout<<"输入总金额：";
    cin>>pocketMoney;
    cout<<"输入红包个数：";
    cin>>pocketNum;
    int iPocketMoney=pocketMoney*100;
    if (pocketMoney/pocketNum<0.01)
    {
        cout<<"单个红包金额不可低于0.01元，请重新输入！"<<endl;
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
    string userName[pocketNum];
    for (int w = 0; w < pocketNum; w++)
    {
        label2:
        cout<<"输入用户名称：";
        cin>>userName[w];
        for (int e = 0; e < w; e++)
        {
            if (userName[e]==userName[w])
            {
                cout<<"已经领取过了";
                printf("%.2f",a[e]);
                cout<<"元."<<endl;
                goto label2;
            }
        }
        printf("%.2f",a[w]);
        cout<<"元."<<endl;
        cout<<"已领取"<<w+1<<"/"<<pocketNum<<"个"<<endl;
    }
    cout<<"红包领取完毕"<<endl;
    for (int r = 0; r < pocketNum; r++)
    {
        cout<<userName[r]<<"领到";
        printf("%.2f",a[r]);
        cout<<"元."<<endl;
    }
    float nowmax=0,nowmin=pocketMoney;
    int maxNum=0,minNum=0;
    for (int t = 0; t < pocketNum; t++)
    {
        if (a[t]>nowmax)
        {
            nowmax=a[t];
            maxNum=t;
        }
        if (a[t]<nowmin)
        {
            nowmin=a[t];
            minNum=t;
        }
    }
    cout<<"手气王："<<userName[maxNum]<<",抢到";
    printf("%.2f",a[maxNum]);
    cout<<"元."<<endl;
    cout<<"倒霉蛋："<<userName[minNum]<<",抢到";
    printf("%.2f",a[minNum]);
    cout<<"元."<<endl;

    // for (int q = 0; q < pocketNum; q++)
    // {
    //     printf("%.2f",a[q]);
    //     cout<<endl;
    // }
    return 0;
}