#include<stdio.h>
int main ()
 
{
int a,b;
float c;
printf("Enter first number = ");
scanf("%d",&a);
printf("Enter second number = ");
scanf("%d",&b);
c = (float)a/b;
printf("Div of %d and %d = %f",a,b,c);
return 0;

}