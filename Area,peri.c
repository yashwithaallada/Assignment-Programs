//Program to calculate area and perimeter of a rectangle
#include<stdio.h>
void main()
{
int l,b,a,p;
printf("Enter length and breadth of the rectangle");
scanf("%d%d",&l,&b);
a=l*b;
p=2*(l+b);
printf("\nThe area of the rectangle is %d",a);
printf("\nThe perimeter of the rectangle is %d",p);
}
