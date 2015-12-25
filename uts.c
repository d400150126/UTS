#include <stdio.h>
#include <math.h>

float y;
int x, m;
int main()
{
    x = 2;
    m = 3;
    y = sqrt((5*pow(x,3)) - pow(x,m-1) + 12 );
    printf("hasil hitung y : %f\n", y);
    return 0;
}
