#include <stdio.h>

int main(void)
{
    int input;
    printf("input a int:");
    scanf("%d",&input);
    printf("\n%d",input);
    int inputplus = input + 10;
    while (input < inputplus)
    {
        printf("%d ",input);
        input++;
    }
    
    return 0;
}