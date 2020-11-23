#include <stdio.h>
#include <string.h>

int main(void)
{
    char *a[]={"hello","world!"};
    printf(a[0]);
    printf(" %d ",sizeof(a));

    char b[][20]={"hello","world!"};
    printf(b[1]);
    printf(" %d ",sizeof(b));

    return 0;
}