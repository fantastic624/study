#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    float inter_biketime, inter_walktime, in_distance;
    scanf("%f", &in_distance);
    inter_biketime = in_distance / 3.0 + 27 + 23;
    inter_walktime = in_distance / 1.2;
    if (inter_biketime < inter_walktime)
        cout << ("Bike");
    else if (inter_walktime == inter_biketime)
        cout << ("All");
    else
        cout << ("Walk");

    return 0;
}