#include<stdio.h>
#include<conio.h>

void main()
{
int a,r,m;

printf("enter your 4 digit no.: ");
scanf("%d",&a);

r=a/1000;
m=a%10;

printf("sum=%d\n",r+m);

}