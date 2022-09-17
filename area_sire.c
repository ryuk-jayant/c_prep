#include<stdio.h>
int main ()
{
    int l,b;
    int r;
    int p1,p2,a1,a2;
    printf("enter dimension of rectangle");
    scanf("%d %d",&l,&b);
    printf("enter radius");
    scanf("%d",&r);

a1=l*b;
a2=r*r*22/7;

printf("area of rectangle%d \n",a1);
printf("area of circle%d",a2);


return 0;

}