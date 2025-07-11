#include<stdio.h>
#include<math.h>
int main(void)
{
double x;
printf("%6s | %10s | %10s\n","x","sin(x)","cos(x)");
for(x=0.0;x<=1.0;x+=0.1)
   {printf("%6.1f | %10.4f | %10.4f\n",x,sin(x),cos(x));}
return 0;
}
