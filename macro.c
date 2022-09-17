#include<stdio.h>
# define CIRCLE(r) (3.14*r*r)
# define TRIANGLE(h,l) (0.5*h*l)
# define SQUARE(n) (n*n)


int main()
{
int r,h,l,n,a;

printf("enter radius of circle\n");
scanf("%d",&r);
a=CIRCLE(r);
printf("area of circle is= %d\n",a);
printf("enter length and breadth of triangle\n");
scanf("%d %d",&h,&l);
a=TRIANGLE(h,l);
printf("area of triangle=%d\n",a);
printf("enter side of square\n");
scanf("%d",&n);
a=SQUARE(n);
printf("area of square=%d\n",a);



return 0;
}