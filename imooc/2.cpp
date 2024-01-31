#include <iostream>
using namespace std;
int main()
{
    float in_unk_x, out_unk_y;
    scanf("%f", &in_unk_x);
    if (0 <= in_unk_x && in_unk_x < 5)
        out_unk_y = -in_unk_x + 2.5;
    else if (5 <= in_unk_x && in_unk_x < 10)
        out_unk_y = 2 - 1.5 * (in_unk_x - 3) * (in_unk_x - 3);
    else if (10 <= in_unk_x && in_unk_x < 20)
        out_unk_y = in_unk_x / 2 - 1.5;
    printf("%.3f", out_unk_y);
    return 0;
}