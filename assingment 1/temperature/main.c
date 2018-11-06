#include<stdio.h>
#include<conio.h>
void main()
{
int t;
printf("enter temperature:");
scanf("%d",&t);
if(t>35) {printf("its a hot day");}
else if(t>=25) {printf("its a nice day");}
else if(t<25) {printf("its a cold day");}
return 0;
}
