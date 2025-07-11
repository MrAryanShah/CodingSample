#include<stdio.h>
 long int factorial(int n)
 {
    long f=1;
    int i;
    for(i=1;i<=n;i++)
    f=f*i;
    return f;
 }
 long int recursive_factorial(int n)
{ 
    if(n==1)
    return 1;
    else
    return(recursive_factorial(n-1)*n);
}
int main(void)
{int num=0,i;
printf("i want table of factorials upto n\n");
scanf("%d",&num);
printf("\n\nfactorials\n");
for(i=1;i<=num;i++)
printf("\n%d\t  %ld\t",i,recursive_factorial(i));
return 0;
} 