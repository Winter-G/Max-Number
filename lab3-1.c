#include <stdio.h>

int square (int num1);
int twice (int num2);

void main()
{

 int num1,num2,num3, num4, myMax;
 num1=15;
 num2=3;
 int *p1 = &square;
 int *p2 = &twice;


num3 = square (num1);
printf("Square of 13 is : %d", num3);
printf("\n");

num4 = twice (num2);
printf("Twice of 3 is : %d", num4);
printf("\n");


printf("maximum number is : %d", square, twice);
printf("\n");

}

int square(int num1){
    int num3= num1*num1;
    return num3;
}

int twice (int num2){
    int num4= num2*2;
    return num4;
}

void max (int *p1, int *p2)
{

p1=&square;
p2=&twice;

if (*p1>*p2)
{
    printf("the maximum number is :%d ", *p1);
}

else
{
    printf("the maximum number is : %d ", *p2);
}
}
