#include<stdio.h>
#include<math.h>

void main()
{
int min,i,j,arr[5]={11,45,67,22,32};

min=arr[0];
for(i=0;i<=4;i++)
{
    if(arr[i]<min)
    {min=arr[i];}
}
printf("%d\n",min);




}