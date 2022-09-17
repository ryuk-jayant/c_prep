#include<stdio.h>
#include<math.h>
void main()
{   
    int arr[100],i,j,k,a;


    for(i=0;i<=100;i++)
    {
        arr[i]=i+1;

    }

for(i=1;i<=100;i++)
{
if(arr[i]!=0)
{
a=100/arr[i];

{
for(j=2;j<=a;j++)
{
    for(k=1;k<=100;k++)
    {
        if(arr[k]==(arr[i]*j))
        {arr[k]=0;}
    }
}
}}}
for(i=0;i<=100;i++)
    {
        if(arr[i]!=0)
        {printf("%d ",arr[i]);}

    }
printf("\n");


}