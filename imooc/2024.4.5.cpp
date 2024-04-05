#include <iostream>
#include <cstring>
#include <ctime>
#include <cstdlib>
using namespace std;
int main()
{//fight
    label3:
    srand((unsigned)time(0));
    int playerAttack[50],enemyAttack[50];
    playerAttack[0]=2;playerAttack[1]=4;enemyAttack[0]=1;enemyAttack[1]=2;
    int playerLive[50]={2},enemyLive[50]={6};
    int enemyChoice=0;
    int playerChoice=0,playerChoiceExit=0,playerChoiceAttack=0;
    for (int round = 0; round <= 20; round++)
    {
        
        cout<<"角色当前生命："<<playerLive[0]<<"      敌方当前生命："<<enemyLive[0]<<endl;
        cout<<"Attack(1) Escape(2)"<<endl;
        cin>>playerChoice;
        if (playerChoice==1)
        {
            cout<<"SimpleAttack(1) SuperAttack(2) Back(3)"<<endl;
            cin>>playerChoiceAttack;
            if (playerChoiceAttack==3)
            {
                goto label3;
            }
            enemyLive[0]=enemyLive[0]-playerAttack[playerChoiceAttack-1];
            cout<<"player moved!敌方生命-"<<playerAttack[playerChoiceAttack-1]<<endl;
            if (enemyLive[0]<=0)
            {
                cout<<"You win!";
                break;
            }

            enemyChoice = rand() % 2 + 1;

            playerLive[0]=playerLive[0]-enemyAttack[enemyChoice-1];
            cout<<"enemy moved!我方生命-"<<enemyAttack[enemyChoice-1]<<endl;
            if (playerLive[0]<=0)
            goto label2;
            
        }
        else if (playerChoice==2)
        {
            label2:
            cout<<"Game over!Round:"<<round<<endl;
            cout<<"Try again? Yes(1) No(2)"<<endl;
            cin>>playerChoiceExit;
            if (playerChoiceExit==2)
            {
                break;
            }
            goto label3;
        }
        else
        {
            
        }
    }
    
    return 0;
}