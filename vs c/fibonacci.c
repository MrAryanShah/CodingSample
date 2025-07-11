#include<stdio.h>
long fibonacci(int n)
{
    long f2=0,f1=1,num;
    int i;
    for(i=0;i<n;i++)
      { num=f2;
        f2=f2+f1;
        f1=num;}
     return f2;
}
long recursive_fibonacci(int n)
{ if(n<=1)
  return n;
else
 return(recursive_fibonacci(n-1)+recursive_fibonacci(n-2));}
int main(void)
{int i,how_many=0;
 printf("i want table of fibonacci upto n:\n");
  scanf("%d",&how_many);
printf("\nfibonacci series\n");
for(i=0;i<how_many;i++)
printf("\n%d\t %ld\t %ld",i,fibonacci(i),recursive_fibonacci(i));
return 0;
}