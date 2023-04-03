#include <stdio.h>

int main()
{
    char char_array[2] = {'a', 'd', 0};
    int difference = 0;
    difference = char_array[1] - char_array[0];
    printf("%d\n", difference);
}