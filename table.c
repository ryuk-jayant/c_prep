#include<stdio.h>
#include<math.h>

int main()
{
int a,b,c,n=1;

printf("enter your no.");
scanf("%d",&a);


for(n=1;n<=10;n++)
{
    b=a*n;
printf("%d*%d=%d\n",a,n,b);

}


  

    return 0;
}