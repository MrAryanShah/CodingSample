#include<stdio.h>
int wrt_very(int count)
{while(count>0)
     {printf("\nvery ");
       count--;}
 printf("much.\n");
     }
int main(void)
{int repeat=0;
printf("how much do u love me on 1-10?\n");
scanf("%d",&repeat);
printf("i love u very");
wrt_very(repeat);
return 0;
}