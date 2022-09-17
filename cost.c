#include<stdio.h>

int main()
{
    float cp,sp,l,p;
    printf("enter cost price and selling price\n");
    scanf("%f %f",&cp,&sp);
    p=sp-cp;
    l=cp-sp;

    if(cp>sp)
    {
        printf("you are in loss\n");
        printf("%f\n",l);

    }
    else
    {
        printf("you got profit\n ");
        printf("%f\n",p);
    }






    return 0;
}