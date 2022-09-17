#include<stdio.h>
#include<math.h>

void main()
{
int i,j;

for(i=1;i<=5;i++)
{
    for(j=1;j<=5;j++)
    {
        if(i==1||j==1||j==5||i==5)
        {printf("s  ");}
        else
        {printf("   ");}
    }
    printf("\n");
}





}