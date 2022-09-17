#include<stdio.h>
#include<math.h>

int main()
{

    int a,c,b;
    printf("enter sides of your triangle");
    scanf("%d %d %d",&a,&b,&c);



if(a==b==c)
    {printf("equilateral triangle\n");}

else if((a==b)||(a==c)||(b==c))
    {printf("isosceles triangle\n");}

else if((pow(a,2)==pow(b,2)+pow(c,2))||(pow(b,2)==pow(a,2)+pow(c,2))||(pow(c,2)==pow(b,2)+pow(a,2)))
    {printf("right triangle\n");}

else
    {printf("scalene triangle\n");}




return 0;


}