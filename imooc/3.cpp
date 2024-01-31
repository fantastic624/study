#include<stdio.h>
#include<stdlib.h>
#include<link.h>
#include<iostream>
using namespace std;
int main()
{
    //当年，我和上帝写下这些……
    char a[50][50]={"######",
                    "#O #  ",
                    "# ## #",
                    "#  # #",
                    "##   #",
                    "######"};
    int i,x,y,p,q;
    char ch;

    cout<<a;
    x=1;y=1;p=1;q=5;
    for (i=0;i<=5,i++;)
        puts(a[i]);
    while (x!=p||y!=q)
    {
        ch=getchar();
        if (ch=='s')
        {
            if (a[x+1][y]!='#')
            {
                a[x][y]=' ';
                x++;
                a[x][y]='O';
            }
            
        }
        if (ch=='w')
        {
            if (a[x-1][y]!='#')
            {
                a[x][y]=' ';
                x--;
                a[x][y]='O';
            }
            
        }
        if (ch=='a')
        {
            if (a[x][y-1]!='#')
            {
                a[x][y]=' ';
                y--;
                a[x][y]='O';
            }
            
        }
        if (ch=='d')
        {
            if (a[x][y+1]!='#')
            {
                a[x][y]=' ';
                y++;
                a[x][y]='O';
            }
            
        }
        system("cls");
        for (i=0;i<=5;i++)
           puts(a[i]);      
    }
    system("cls");
    printf("You win!\n");
    return 0;
}