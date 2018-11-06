#include <stdio.h>
#include <conio.h>

int main()
{
int x,y;
printf("enter first number x:");
scanf("%d",&x);
printf("enter second number y:");
scanf("%d",&y);
x=x+y;
y=x-y;
x=x-y;
printf("after swapping value of x:%d\n",x);
printf("after swapping value of y:%d\n",y);
return 0;
}
