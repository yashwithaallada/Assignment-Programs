//Program to validate a login
#include<stdio.h>
void main()
{
int suid=101,spwd=4321;
int uid,pwd;
printf("Enter user id and password");
scanf("%d%d",&uid,&pwd);
if(uid==suid)
{
if(pwd==spwd)
printf("Login successful");
else
printf("Incorrect password");
}
else
printf("User not found");
}
