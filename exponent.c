#include<stdio.h>
int power(int x,int y);
int main()
{
int a,b,c;

printf("enter base and exponent respectively");
scanf("%d %d",&a,&b);
c=power(a,b);

printf("%d\n",c);
return 0;

}

int power(int x,int y)
{
int z=x,c=1;
for(c==1;c<y;c++)
{
    z=x*z;
}


    return z;
}