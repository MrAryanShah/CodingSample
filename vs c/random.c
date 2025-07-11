
#include<stdio.h>
#include<math.h>
int main(void)
{
double input;
int i;
for(i = 0; i < 10; i++)
{
 input = i / 10.0;  // input value for the trigonometric functions.
 printf("\nsin( %lf ) = %lf \t", input, fabs(sin(input)));  // print sin(input)
 printf("cos( %lf ) = %lf", input, fabs(cos(input)));  // print cos(input)

}


printf("\n+++++++\n");
return 0;
}