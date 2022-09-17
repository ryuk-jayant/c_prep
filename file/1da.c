#include<stdio.h>

void main()
{
    int i,a[4];
    int* c;
for(i=0;i<=3;i++)
{
printf("give input to array\n");
scanf("%d",&a[i]);
}
//i=0;
////c=&a[0];
for(i=3;i>=0;i--)
{
    printf("%d\n",a[i]);
}


}