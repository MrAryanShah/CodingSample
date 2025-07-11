#include<stdio.h>
#define size 5
int main(void)
{
    int grade[5]={90, 80, 92, 95, 100};
    double sum=0.0;
    int i;
    printf("my grades are:\n");
    for(i=0;i<size;i++)
    printf("%d\t",grade[i]);
    printf("\n\n");
    for(i=0;i<size;i++)
    sum=sum+grade[i];
    printf("my average is %0.2f\n",sum/size);
    return 0;
}