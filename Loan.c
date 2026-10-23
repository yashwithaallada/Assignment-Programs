//Program that decides whether a loan can be approved
#include<stdio.h>
void main()
{
int age,mi,cs;
printf("Enter age of the person");
scanf("%d",&age);
printf("Enter monthly income and credit score");
scanf("%d%d",&mi,&cs);
if(age>21&&age<60)
{
if(mi>=25000)
{
if(cs>=700)
printf("Loan approved");
else
printf("Loan rejected:credit score below 700");
}
else
printf("Loan rejected:income below ₹25,000");
}
else
printf("Loan rejected:age not in 21 to 60");
}
