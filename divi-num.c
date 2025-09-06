#include<stdio.h>
int main ()
 
{
int a,b;
float c;
printf("Enter first number = ");
fflush(stdout);
scanf("%d",&a);
printf("Enter second number = ");
fflush(stdout);
scanf("%d",&b);
c = (float)a/b;
printf("Div of %d and %d = %f",a,b,c);
fflush(stdout);
return 0;

}