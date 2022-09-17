#include<stdio.h>
#include<math.h>

int main()
{

    int a,c,b;
    printf("enter sides of your triangle");
    scanf("%d %d %d",&a,&b,&c);

if((a+b>c)&&(b+c>a)&&(a+c>b))
    {printf("triangle is valid\n");}
else
{printf("triangle is invalid\n");}



return 0;


}