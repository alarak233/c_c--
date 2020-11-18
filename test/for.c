#include <stdio.h>

int main(void)
{
    double sum = 0.0;
    int limit = 20;
    int num = 0;
    int power = 1;

    for (num;num<limit;num++,power *= 2,sum += 1.0/power)
    {
        printf("num = %d,time = %.15fs\n",num,sum);
    }
}