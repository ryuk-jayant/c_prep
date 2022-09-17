#include<stdio.h>
#include<math.h>
int marks(int a,int b,int c);


int main()
{
int y,l,m,n;
printf(" enter your marks in 3 subjects respectively\n");
scanf("%d %d %d",&l,&m,&n);
y=marks(l,m,n);

printf("avrage of stdents marks are %d\n",y);
return 0;
}

int marks(int a,int b,int c)
{
int v;


v=(a+b+c)/3;


return v;
}