#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x=0;
    printf("Enter option :");
    scanf("%d",&a);
    int a=1;
    int b=5;
    int i;
    int c=0;
    for (i=0;i<5;i++)
    {
        if (x==1)
        {
            if (a==1)
                {
                    printf("  *\n");


                }
            else if (a==3)
                {
                    printf(" ***\n");


                }
            else if (a==5)
                {
                    printf("*****\n");
                    c=1;
                }
                    if(c==0)
                    a=a+2;
                    else
                    a=a-2;
        }
        else if(x==2)
        {
            if (a==1)
                {
                    printf("*****\n");


                }
            else if (a==3)
                {
                    printf(" ***\n");


                }
            else if (a==5)
                {
                    printf("  *\n");
                    c=1;
                }
                    if(c==0)
                    a=a+2;
                    else
                    a=a-2;

        }
    }
    return 0;
}
