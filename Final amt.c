//Program to find Final amount that has to be paid
#include <stdio.h>
void main()
{
int amount, discount = 0, delivery = 0, finalAmount;
int membership;
printf("Enter the order amount: ");
scanf("%d", &amount);
printf("Enter membership type (1 for Premium, 0 for Regular): ");
scanf("%d", &membership);
if (amount >= 500)
{
delivery = 0;
if (membership == 1)
discount = amount * 0.10;
}
else
{
delivery = 50;
}
finalAmount = amount - discount + delivery;
printf("Final amount to be paid=₹%d\n",finalAmount);
}
