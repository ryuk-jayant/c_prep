#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{
int p,t,r,si;

printf("enter amount =");
scanf("%d",&p);
printf("enter rate of interest=");
scanf("%d",&r);
printf("enter time=");
scanf("%d",&t);
si=(p*r*t)/100;

printf("simple interest is= %d\n",si);

}