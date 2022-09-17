#include<stdio.h>
#include<math.h>

int main()
{

    int a,c,d,b;
    printf("enter no.");
    scanf("%d",&c);

    for(a=2;a<=c;a++)
    {
        for(b=2;b<=(a-1);b++)
        {

            if(a%b==0)
            {
                break;
            }
        }
        if(b==a)
        {printf("%d\n",a);}

    }


    return 0;


}