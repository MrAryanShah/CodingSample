#include<stdio.h>
#define size 5
void swap(int *a, int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
void print_array(int how_many,int data[],char *str)
{
    int i;
    printf("%s",str);
    for(i=0;i<how_many;i++)
    printf("%d\t",data[i]);
}
void bubble(int data[],int how_many)
{
    int i,j;
    int go_on;
    for(i=0;i<how_many;i++)
    print_array(how_many,data,"\n inside bubble");
    printf("i=%d,enter any int to continue:",i);
    scanf("%d",&go_on);
    for(j=how_many-1;j>i;j--)
    if(data[j-1]>data[j])
    swap(&data[j-1],&data[j]);
}
int main()
{
int grade[5]={45,76,23,81,69};
print_array(size,grade,"my grades\n");
printf("\n\n");
bubble(grade,size);
print_array(size,grade,"my sorted grades\n");
printf("\n\n");
return 0;

}