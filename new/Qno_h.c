#include<stdio.h>
#include<conio.h>

void main()
{
float a,p,s;

printf("enter your sp and profit: ");
scanf("%f %f",&s,&p);

s=s/15;
p=p/15;
a=s-p;
printf(" cp=%f\n",a);


}