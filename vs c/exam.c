#include<stdio.h>
int main()
{
    int x=10,y,z;
    z=y=x;
y-=--x;
z-=x--;
x-=--x-x--;
printf("x=%d y=%d z=%d",x,y,z);
return 0;
}