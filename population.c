#include<stdio.h>
#include<math.h>

int main()
{
int a,n=1;

printf("enter starting population");
scanf("%d",&a);


for(n=1;n<=10;n++)
{
    a=a+(a/10);
printf("population at the end of %d year=%d\n",n,a);

}


  

    return 0;
}