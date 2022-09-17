#include<stdio.h>
#include<math.h>
int sum(int n);
int main()
{
int b;
b=sum(25);


 return 0;
}
int sum(int n)
{
 int m;
 
if(n==1)
{m=1;}
else if(n==0)
{m=0;}
else if(n>0)
{m=sum(n-2)+sum(n-1);
printf("%d\n",m);}



return m;
}