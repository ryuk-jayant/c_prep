#include<stdio.h>
#include<math.h>

int main()
{

    int a,n;
    float b,c;
    printf("enter no.");
    scanf("%d",&c);

b=1-(1/c);
   for(n=1;n<=7;n++)
   {
       a=pow(b,n);
       b=b+a/2 ;
   }
printf("%f\n",b);

    return 0;
}