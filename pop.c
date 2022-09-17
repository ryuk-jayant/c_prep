#include<stdio.h>

int main()
{
    int y,b,c,d;

    printf("write your year:");
    scanf("%d",&y);
    b=y%4;
    d=y%100;
   c=y%400;
    if( ((d==0)&&(c==0))|| (b==0) )
        {printf("year is leap\n");
        }

    else
    {
        printf("year is not leap\n");
    }
   
   
    return 0;

}