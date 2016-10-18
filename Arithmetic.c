/*
Student Name: Pawan joshi
Roll:11
Lab no. :08
Program: To use four type of arithmetic operator
Date: 18 octber, 2016
*/
#include<stdio.h>
int main()
{
int a,b,v;
printf("Enter a first number:\n");
scanf("%d",&a);
printf("Enter a second number:\n");
scanf("%d",&b);

printf("use of'+' operator :\n");
printf("%d + %d = %d",a,b,a+b);

printf("use of'-' operator :\n");
printf("%d '-' %d = %d",a,b,a-b);

printf("use of'*' operator :\n");
printf("%d '*' %d = %d",a,b,a*b);

printf("use of'/' operator :\n");
printf("%d '/' %d = %d",a,b,a/b);

printf("use of'%' operator :\n");
printf("%d '%%' %d = %d",a,b,a%b);


printf("Enter a first number:\n");
scanf("%d",&v);
printf("\n original value of v is %d \n",v);
printf("the post fix increment(v++) %d\n",v++);
printf("the pre post fix increment(++v) %d ",++v);

printf("\n original value of v is %d \n",v);
printf("the post fix Decrement(v--) %d\n",v--);
printf("the pre post fix increment(--v) %d ",--v);


return 0;
}
