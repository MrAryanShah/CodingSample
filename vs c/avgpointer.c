#include<stdio.h>
#define size 5
int main()
{
    int grade[5]={20, 40, 80, 100, 120};
    double sum=0.0;
    double *ptr_to_sum=&sum;
    int i;
    printf("\nmy grades are\n");
    for(i=0;i<size;i++)
    printf("%d\n",grade[i]);
    printf("\n\n");
    for(i=0;i<size;i++)
    sum=sum+grade[i];
    printf("my average is %0.2f\n",sum/size);
    printf("\n\n");
    printf("sum is at %p or %lu and is %lf\n",ptr_to_sum,ptr_to_sum,*ptr_to_sum);
    printf("grades is at %lu and %lu\n",grade,grade+5);
    return 0;
}   