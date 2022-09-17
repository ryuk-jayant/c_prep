#include<stdio.h>
#include<math.h>

void main()
{
int i,j=0;


for(i=1;i<=5;i++)
{
    for(j=1;j<=5;j++)
    {
        if(i==j&&i+j==6)
        {printf("o  ");}
        else
       { printf("s  ");}
    }
printf("\n");

}

}