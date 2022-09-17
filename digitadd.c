#include<stdio.h>
#include<math.h>
int add(void);

int main()
{
int d;


d=add();

printf("%d\n",d);


    return 0;
}
int add(void)
{
int a,n,m=0;
for(n=0;n<5;n++)
{

printf("enter your no.");
scanf("%d",&a);
m=a+m;


}


return m;


}