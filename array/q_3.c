#include<stdio.h>
#include<math.h>
void modify(int *);
void main()
{
int arr_1[25],i,j;
int *k,*l;

k=&arr_1[0];

for(i=0;i<=24;i++)
{
   arr_1[i]=i+10;

}
modify(k);

for(i=0;i<=24;i++,k++)
{
    printf("%d  ",*k);
}
printf("\n");
}

void modify(int *c){

int i,j;

for(i=0;i<=24;i++,c++)
{
    *c=(*c)*3;
}



}