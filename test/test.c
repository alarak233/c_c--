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

   float salary;
   printf("\ayour salary:");
   printf("$_______\b\b\b\b\b\b\b");
   scanf("%f",&salary);
   getchar();
   printf("\t$%.2f a month is $%.2f a year.",salary,salary * 12);
   printf("\rGee!\n");
   getchar();

   return 0;
}