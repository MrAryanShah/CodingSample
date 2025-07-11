#include<stdio.h>
double square(double x)
  {return x*x;}
double cube(double x)
  {return x*x*x;}
int main(void)
{
    int num=0,i,j;
    printf("i want sqaure and cube from 1  to n where n is\n");
    scanf("%d",&num);
    printf("square and cube of  by interval of .1 is\n");
          for(i=1;i<=num;i++)
              for(j=0;j<=10;j++)
          printf("\n%lf\t %lf\t %lf\t",
            i+j/10.0, square(i+j/10.0), cube(i+j/10.0));
          return 0;
}
