#include<stdio.h>
#include<math.h>

void main()
{
int arr[5][5],i,j,t=7,min;

for(i=0;i<=4;i++)
{
    for(j=0;j<=4;j++,t++)
    {
        arr[i][j]=i+j+t;
    }
}
min=arr[0][0];
arr[3][2]=2;
for(i=0;i<=4;i++)
{
    for(j=0;j<=4;j++)
    {
        if(arr[i][j]<min)
        {
            arr[i][j]=min;
        }
    }
}

printf("min value is %d:%d\n",min,arr[3][2]);

}