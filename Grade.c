// Program to evaluate a student's grade
#include<stdio.h>
void main()
{
int marks;
printf("Enter the marks obtained out of 100");
scanf("%d",&marks);
if(marks>=90&&marks<=100)
printf("GRADE O");
else if(marks>=80&&marks<=89)
printf("GRADE A+");
else if(marks>=70&&marks<=79)
printf("GRADE A");
else if(marks>=60&&marks<=69)
printf("GRADE B");
else if(marks>=50&&marks<=59)
printf("GRADE C");
else if(marks<50&&marks>=0)
printf("FAIL");
else
printf("INVALID MARK");
}
