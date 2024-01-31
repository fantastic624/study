#include <iostream>
#include <ctime>
#include <cstdlib>
#include <cstring>
using namespace std;
int main()
{
    char gameModeChoice;
            //定义生命
    int gameRange, lives, rangeChoice;
    cout << "欢迎来到猜数字——您闲暇时间的不二之选！OvO" << endl
         << "请选择游戏模式：" << endl
         << "单人（输入1）   多人（输入2）" << endl;
    cin >> gameModeChoice;
    cout << "请选择数字范围：" << endl
         << "1~100（输入1）   1~1000（输入2）   1~10000（输入3）" << endl;
    cin >> rangeChoice;
    switch (rangeChoice)
    {
    case 1:
        gameRange = 100;
        lives = 6;
        break;
    case 2:
        gameRange = 1000;
        lives = 9;
        break;
    case 3:
        gameRange = 10000;
        lives = 12;
        break;
    }

    if (gameModeChoice == '1')
    {
        srand((unsigned)time(0));
        int answer = rand() % gameRange + 1;

        //输入猜的数
        cout << "您共有" << lives << "条命" << endl
             << "Try to guess a number between 1 and " << gameRange << "." << endl;
        int guess, nowMin = 1, nowMax = gameRange;
        while (1)
        {
            if (lives <= 0) //go die
            {
                cout << "Game Over!" << endl
                     << "感谢游玩！——开发者寄语";
                break;
            }
            cin >> guess;
            if (guess < nowMin || guess > nowMax)
            {
                cout << "数字不在范围内，请重新输入" << endl;
                continue;
            }
            if (guess==answer)//猜对部分
            {
                cout << "猜中了!" << endl;
                break;
            }
            //判断大小
            if (guess < answer) //猜小
            {
                if (guess > nowMin)
                    nowMin = guess;
                cout << "在" << nowMin << "~" << nowMax << "之间" << endl;
                lives = lives - 1;
                cout << "生命剩余：" << lives << endl;
            }
            else//猜大
            {
                if (guess < nowMax)
                    nowMax = guess;
                cout << "在" << nowMin << "~" << nowMax << "之间" << endl;
                lives = lives - 1;
                cout << "生命剩余：" << lives << endl;
            }
        }
    }

    if (gameModeChoice == '2')
    {
        //随机一个答案
        srand((unsigned)time(0));
        int answer = rand() % gameRange + 1;
        //几个玩家，玩家名
        int playerNumber, times = 1;
        cout << "输入人数:";
        cin >> playerNumber;
        cout << "输入名字:" << endl;
        string playerName;
        for (playerNumber; playerNumber > 0; playerNumber--)
        {
            cout << "玩家" << times << "是";
            times++;
            cin >> playerName;
        }
        int role = 1;
        //输入猜的数
        cout << "Try to guess a number between 1 and " << gameRange << "." << endl;
        int guess, nowMin = 1, nowMax = gameRange;
        for (role;; role++)
        {
            if (role == times) //回合清空
                role = role - times + 1;
            cout << "玩家" << role << "猜:";
            cin >> guess;
            if (guess < nowMin || guess > nowMax)
            {
                cout << "数字不在范围内，请玩家重新输入" << endl;
                role--;
                continue;
            }
            //猜对部分
            if (guess == answer)
            {
                cout << "玩家" << role << "猜中辣" << endl;
                break;
            }
            //判断大小
            if (guess < answer) //猜小
            {
                if (guess > nowMin)
                    nowMin = guess;
                cout << "在" << nowMin << "~" << nowMax << "之间" << endl;
            }
            else  //猜大
            {
                if (guess < nowMax)
                    nowMax = guess;
                cout << "在" << nowMin << "~" << nowMax << "之间" << endl;
            }
        }
    }
    return 0;
}
// V1.4.0 最终解释权归何雨涵™所有

// todo：玩家姓名一一对应
// todo：包头包尾问题！