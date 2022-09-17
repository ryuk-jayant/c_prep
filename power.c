#include<stdio.h>

int main()
{
    int n,b,n1,c=2;

printf("enter a no.");
scanf("%d",&n);

printf("enter exponent.");
scanf("%d",&b);

while(c<=b)
{
    
    if(c==2)
    {n1=n*n;}
    else
    {
    n1=n*n1;
    }
c=c+1;
}
printf("%d\n",n1);


    return 0;
}