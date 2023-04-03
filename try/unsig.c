#include <stdio.h>

int main()
{
    int positive = 5;
    int negative = -positive;
    positive = -negative;
    printf("%d,%d\n", negative, positive);
}