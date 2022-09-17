#include<stdio.h>
#include<math.h>
int main()
{   
    int a,b,total,c,e;


    printf("enter marks of three subjects;");
    scanf("%d %d %d",&a,&b,&c);

    total=a+b+c;
    e=total*100/300;

    if(e>=60)
    {
        printf("you got first div.\n");
    }
    else
    {
        if(e>=50)
            printf("you got 2 div. bro\n");
        else
        {
            if(e>=40)
            printf("you got 3rd div bro\n");
            else
            printf("you are fail\n");
        }
        
    }
    return 0;

}