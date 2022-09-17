#include<stdio.h>
#include<math.h>

void main()
{
int arr[3][3],arr_[3][3],arr_add[3][3],i,j,t=0;

for(i=0;i<=2;i++)
{
    for(j=0;j<=2;j++,t++)
    {
        arr[i][j]=i+j;
        arr_[i][j]=i+j+t;
    }
}


t=0;
for(i=0;i<=2;i++)
{
    for(j=0;j<=2;j++)
    {
       arr_add[i][j]=arr[i][j]+arr_[i][j];
    }
}
printf("array1");
for(i=0;i<=2;i++)
{
    printf("\n");
    for(j=0;j<=2;j++,t++)
    {
        printf("%d ",arr[i][j]);
    }
}
printf("\narray2");
for(i=0;i<=2;i++)
{
    printf("\n");
    for(j=0;j<=2;j++,t++)
    {
        printf("%d ",arr_[i][j]);
    }
}
printf("\nyour sum:");
for(i=0;i<=2;i++)
{
    printf("\n");
    for(j=0;j<=2;j++,t++)
    {
        printf("%d ",arr_add[i][j]);
    }
}
printf("\n");
}