// Program to classify a person's body weight
#include<stdio.h>
void main()
{
float w,h,bmi;
printf("Enter the weight of the person in kg");
scanf("%f",&w);
printf("\nEnter the height of the person in meters");
scanf("%f",&h);
bmi=w/(h*h);
if(bmi<18.5)
printf("\nUnderweight with BMI:%f",bmi);
else if(bmi<25)
printf("\nNormal with BMI:%f",bmi);
else if(bmi<30)
printf("\nOverweight with BMI:%f",bmi);
else
printf("\nObese with BMI:%f",bmi);
}
