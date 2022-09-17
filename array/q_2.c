#include<stdio.h>
#include<math.h>
#include<stdbool.h>
void main()
{
int arr_1[25],i,j;
int *k,*l;

k=&arr_1[0];

for(i=0;i<=24;i++)
{
   arr_1[i]=i+10;

}
arr_1[10]=5;
for(i=0;i<=24;i++)
{



if(arr_1[i]<*k)
{k=&arr_1[i];}

}

printf("%d\n",*k);

}