#include <stdio.h>

int main(void)
{
    int week;
    int limmt = 150;
    int friendNum = 5;
    for(week = 0;friendNum < limmt;week += 1)
    {
        printf("week = %3d,friend = %4d\n",week,friendNum);
        friendNum = 2 * (friendNum -week - 1);
    }
    return 0;
}