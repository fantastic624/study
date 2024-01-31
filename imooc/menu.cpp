#include <iostream>
using namespace std;
int main()
{
    char choice = 1;
    int allPrice = 0, exchangePurchase = 2,time1=0,time2=0,time3=0,time4=0,time5=0,time6=0,time7=0,time8=0,time9=0;
    cout << "Welcome!Here is the menu." << endl;
    cout << "_______________________________________________________________" << endl;
    cout << "Meals:Beef hamburger(1)  Chicken hamburger(2)  Fresh chicken(3)" << endl;
    cout << "      13 yuan            12 yuan               11 yuan" << endl;
    cout << "Snacks:French fries(4)   Chicken wings(5)      Salad(6)" << endl;
    cout << "       5 yuan             7 yuan                4 yuan" << endl;
    cout << "Drinks:Cola(7)           Orange juice(8)       Coffee(9)" << endl;
    cout << "       5 yuan             6 yuan                8 yuan" << endl;
    cout << "Packages:" << endl;
    cout << "A: a meal, a snack and a cup of drinks(-3 yuan)" << endl;
    cout << "B: a hamburger and a cup of drinks(-2 yuan)" << endl;
    cout << "Activities now:" << endl;
    cout << "If you choose over 39 yuan,You will have a choice to buy a kind of snack with only 1 yuan!" << endl;
    cout << "Square accounts(0)" << endl;
    while (choice != '0')
    {
        cin >> choice;
        switch (choice)
        {
        case '1':
            allPrice = allPrice + 13;time1++;
            break;
        case '2':
            allPrice = allPrice + 12;time2++;
            break;
        case '3':
            allPrice = allPrice + 11;time3++;
            break;
        case '4':
            allPrice = allPrice + 5;time4++;
            break;
        case '5':
            allPrice = allPrice + 6;time5++;
            break;
        case '6':
            allPrice = allPrice + 4;time6++;
            break;
        case '7':
            allPrice = allPrice + 5;time7++;
            break;
        case '8':
            allPrice = allPrice + 6;time8++;
            break;
        case '9':
            allPrice = allPrice + 8;time9++;
            break;
        case 'A':
            cout << "Choose a meal, a snack and a cup of drinks." << endl;
            label1:
            cin >> choice;
            
            switch (choice)
            {
            case '1':
                allPrice = allPrice + 13;time1++;
                break;
            case '2':
                allPrice = allPrice + 12;time2++;
                break;
            case '3':
                allPrice = allPrice + 11;time3++;
                break;
            default:
                cout << "This is not be included in there." << endl;
                goto label1;
                break;
            }
            label2:
            cin >> choice;
            switch (choice)
            {
            case '4':
                allPrice = allPrice + 5;time4++;
                break;
            case '5':
                allPrice = allPrice + 6;time5++;
                break;
            case '6':
                allPrice = allPrice + 4;time6++;
                break;
            default:
                cout << "This is not be included in there." << endl;
                goto label2;
                break;
            }
            label3:
            cin >> choice;
            switch (choice)
            {
            case '7':
                allPrice = allPrice + 5;time7++;
                break;
            case '8':
                allPrice = allPrice + 6;time8++;
                break;
            case '9':
                allPrice = allPrice + 8;time9++;
                break;
            default:
                cout << "This is not be included in there." << endl;
                goto label3;
                break;
            }
            allPrice = allPrice - 3;
            cout<<"Okay."<<endl;
            break;
        case 'B':
            cout << "Choose a hamburger and a cup of drinks." << endl;
            label4:
            cin >> choice;
            switch (choice)
            {
            case '1':
                allPrice = allPrice + 13;time1++;
                break;
            case '2':
                allPrice = allPrice + 12;time2++;
                break;
            default:
                cout << "This is not be included in there." << endl;
                goto label4;
                break;
            }
            label5:
            cin >> choice;
            switch (choice)
            {
            case '7':
                allPrice = allPrice + 5;time7++;
                break;
            case '8':
                allPrice = allPrice + 6;time8++;
                break;
            case '9':
                allPrice = allPrice + 8;time9++;
                break;
            default:
                cout << "This is not be included in there." << endl;
                goto label5;
                break;
            }
            allPrice = allPrice - 2;
            cout<<"Okay."<<endl;
            break;
        }
        
    }
    if (allPrice >= 39)
        {
            cout << "Your bill is over 39 yuan.You have a choice to buy a kind of snack with only 1 yuan!Do you want do that？" << endl
                 << "Yes(1)  No(0)";
            cin >> exchangePurchase;
            if (exchangePurchase == 1)
            {
                cout << "Choose a snack." << endl;
                label6:
                cin >> choice;
                switch (choice)
                {
                case '4':
                    allPrice = allPrice + 1;time4++;
                    break;
                case '5':
                    allPrice = allPrice + 1;time5++;
                    break;
                case '6':
                    allPrice = allPrice + 1;time6++;
                    break;
                default:
                    cout << "This is not be included in there." << endl;
                    goto label6;
                    break;
                }
            }
        }
    cout<<"You have ordered :"<<endl;
    if (time1>0)
    {
    cout<<time1<<" Beef hamburger";
    if (time1>1)
    cout<<"s";
    cout<<endl;
    }

    if (time2>0)
    {
    cout<<time2<<" Chicken hamburger";
    if (time2>1)
    cout<<"s";
    cout<<endl;
    }

    if (time3>0)
    {
    cout<<time3<<" Fresh chicken";
    if (time3>1)
    cout<<"s";
    cout<<endl;
    }

    if (time4>0)
    {
    cout<<time4<<" part";
    if (time4>1)
    cout<<"s";
    cout<<" of French fries";
    cout<<endl;
    }

    if (time5>0)
    {
    cout<<time5<<" pair";
    if (time5>1)
    cout<<"s";
    cout<<" of Chicken wings";
    cout<<endl;
    }

    if (time6>0)
    {
    cout<<time6<<" Salad";
    if (time6>1)
    cout<<"s";
    cout<<endl;
    }

    if (time7>0)
    {
    cout<<time7<<" cup";
    if (time7>1)
    cout<<"s";
    cout<<" of Cola";
    cout<<endl;
    }

    if (time8>0)
    {
    cout<<time8<<" cup";
    if (time8>1)
    cout<<"s";
    cout<<" of Orange juice";
    cout<<endl;
    }

    if (time9>0)
    {
    cout<<time9<<" cup";
    if (time9>1)
    cout<<"s";
    cout<<" of Coffee";
    cout<<endl;
    }

    cout << "There are " << allPrice << " yuan in all."<<endl<<"Have a good meal!";
    return 0;
}