#include <stdio.h>
void smile(void)
{
   printf("Smile!");
}

void one_three(void)
{
   printf("one\n");
   two();
   printf("three\n");
}

void two(void)
{
   printf("two\n");
}

int main(void)
{
   printf("gy\n");
   printf("g\ny\n");
   printf("g");
   printf("y\n");
   int age;
   age = 25;
   int agedays = age * 365;
   printf("your age days is %d\n",agedays);

   smile();
   smile();
   smile();
   printf("\n");
   smile();
   smile();
   printf("\n");
   smile();

   printf("\nstarting:\n");
   one_three();
   printf("done!\n");
   return 0;
}