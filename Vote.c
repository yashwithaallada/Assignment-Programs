// Program to check whether the person is eligible to vote or not
#include<stdio.h>
void main()
{
int age;
printf("Enter age of the person");
scanf("%d",&age);
if(age>=18)
printf("\nEligible to vote");
else
printf("\nNot eligible to vote");
}
