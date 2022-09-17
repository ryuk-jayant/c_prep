#include<stdio.h>
#include<conio.h>

void main()
{
int a,r,m,r1,r2,m1;

printf("enter your 4 digit no.: ");
scanf("%d",&a);

r=a/1000;//1 digit
m=a%10;//4 digit
m1=a%1000;
r1=m1/100;//2 digit
m1=a%100;
r2=(m1-m)/10;
printf("%d %d %d %d\n",r+1,r1+1,r2+1,m+1);
}