#include<stdio.h>
#include<math.h>

int main()
{

    int a,c,d,b;
    printf("enter no.of days you are late");
    scanf("%d",&a);

b=a*50;
c=a*5;
if(a<=5)
{printf("your fine is%d paise\n",b);}
else if(5>a>=10)
{printf("your fine is%d rupee\n",a);}
else if(10<a<=30)
{printf("your fine is%d rupee\n",c);}
else
{printf("your membership is done for\n");}   

return 0;


}