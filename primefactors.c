#include<stdio.h>
#include<math.h>
void primefactor(int a);

int main()
{
int x,y;

printf("enter your number");
scanf("%d",&x);
primefactor(x);

return 0;
}
void primefactor(int a)
{
int i,j;

for(i=1;i<a;i++)
{if(a%i==0)
    {for(j=1;j<i;j++)
        {if(i%j==0)
        printf("..");}
    if(i==j)
    {printf("%d\n",i);}
    }
}
}