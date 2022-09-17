#include<stdio.h>
#include<math.h>
#include<stdbool.h>
void main()
{
int arr[3][3],i,j;

for(i=0;i<=2;i++)
{
    for(j=0;j<=2;j++)
    {
        arr[i][j]=i+10+j;
    }
}



for(i=0;i<=2;i++)
{
    printf("\n");
    for(j=0;j<=2;j++)
    {
        printf("%d ",arr[i][j]);
    }
}
printf("\n");
}