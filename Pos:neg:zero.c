//To determine whether a number is positive,negative or zero
#include<stdio.h>
void main()
{
int n;
printf("Enter a number");
scanf("%d",&n);
if(n>0)
printf("\nThe number is positive");
else if(n<0)
printf("\nThe number is negative");
else
printf("\nThe number is zero");
}
