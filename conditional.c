#include<stdio.h>

int main()
{
    int l,b;
    
    printf("enter your no.");
    scanf("%d",&l);



    if(l>0)
    {
        b=l-1;
        printf("%d\n",b);

    }
    else
    {
        b=l+1;
       printf("%d\n",b);
    }






    return 0;
}