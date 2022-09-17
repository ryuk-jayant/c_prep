#include<stdio.h>
#include<math.h>
int main()
{   
    int a,b,c,d,e;


    printf("enter your amount");
    scanf("%d",&a);
   
    b=a/100;
    c=(a-b*100)/50;
    d=((a-b*100)-50*c)/10;
    e=((a-b*100)-50*c)-10*d;

    printf(",%d\n ,%d\n,%d\n,%d\n",b,c,d,e);

    return 0;

}