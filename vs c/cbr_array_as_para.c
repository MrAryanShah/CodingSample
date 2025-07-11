#include<stdio.h>
#define size 5
double average_grade(int how_many, int grade[])
{
    int i;
    double sum=0.0;
    for(i=0;i<how_many;i++)
     sum+=grade[i];
     return(sum/how_many);
}
void print_grade(int how_many, int grade[])
{
    int i;
    printf("i have %d grades \n",how_many);
    for(i=0;i<how_many;i++)
    printf("%d\n",grade[i]);
}
int main()
{
    int grade[5]={90,91,92,95,86};
    print_grade(size,grade);
    printf("\n\n");
    printf("my average is %0.2f \n",average_grade(size,grade));
    return 0;
}