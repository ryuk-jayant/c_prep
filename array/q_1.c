#include<stdio.h>
#include<math.h>

void main()
{
int arr_1[4],arr_2[4],i;


for(i=0;i<=3;i++)
{
    arr_1[i]=i+1;
}

for(i=0;i<=3;i++)
{
  arr_2[3-i]=arr_1[i];
}

for(i=0;i<=3;i++)
{
    printf("%d\n",arr_2[i]);
}




}