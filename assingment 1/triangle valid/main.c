#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x,y,z,a;
    printf("enter first angle x:");
     scanf("%f",&x);
    printf("enter second angle y:");
     scanf("%f",&y);
    printf("enter third angle z:");
    scanf("%f",&z);
    a=x+y+z;
    if(a==180)
    printf("triangle is valid");
    else
    printf("triangle is not valid");

    return 0;
}
