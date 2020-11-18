#include <stdio.h>
#include <string.h>

int main(void)
{
    char surname[20],personalName[20];
    printf("input your full name:");
    scanf("%s%s",surname,personalName);
    int surnmeLen = strlen(surname) + 3;
    int personalNameLen = strlen(personalName) + 3;
    printf("\"%-*s,%-*s\"\n",personalNameLen,personalName,surnmeLen,surname);
    return 0;
}