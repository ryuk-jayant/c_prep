#include<stdio.h>
#include<math.h>

int main()
{
    int ot,rate=12,n,b=1;


    while(b<=10)
    {
        
        printf("enter working hours by workers::= ");
        scanf("%d",&n);

        ot=rate*n;

         if(n>40)
            {printf("%d\n",ot);}

         else
            {printf("no overtime\n");}



      b=b+1;
    }
    return 0;
}