#include <iostream>

using namespace std;

int main()
{

    float a, b, c, d, x;
    bool once = true;
    while (true)
    {

        if (once == true)
        {
            cout << "欢迎使用何雨涵牌一元一次方程计算器！\n";
            cout << "本计算器输入方程有一定规律，请仔细阅读：\n";
            cout << "输入格式：ax + b = cx + d 中的a，b，c，d。其中a不等于c。\n";
            cout << "输入的a=c将提示无解，您可以选择重新查看提示。\n";
            once = false;
        }
        else
        {
            cout << "请输入方程系数 a=";
            cin >> a;
            cout << "请输入方程系数 b=";
            cin >> b;
            cout << "请输入方程系数 c=";
            cin >> c;
            cout << "请输入方程系数 d=";
            cin >> d;
            x = (d - b) / (a - c);
            if (d==b)
                x=0;
            if (a == c)
            {
                cout << "方程无解。是否需重新查看提示？（是 = 1/否 = 0）";
                bool tips;
                cin >> tips;
                if (tips == true)
                {
                    cout << "本计算器输入方程有一定规律，请仔细阅读：\n";
                    cout << "输入格式：ax + b = cx + d 其中a不等于c。\n";
                    cout << "输入的a=c将提示无解，您可以选择重新查看提示。\n";
                    tips = false;
                }
            }
            else
                cout << "方程解为" << x << "\n";
            cout << "是否继续使用？（是 = 1/否 = 0）";
            bool exist;
            cin >> exist;
            if (exist == false)
            {
                cout << "再次感谢您的使用！";
                break;
            }
        }
    }
        return 0;
}