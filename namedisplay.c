#include<stdio.h>
#include<math.h>

void main()
{
int i,j;

for(i=0;i<=10;i++)
{
for(j=0;j<=13;j++)
{
    if(i==0||i==1||j==12||j==13||i==9||i==10)
    printf("j  ");
    else
    {printf("   ");}
}
printf("\n");
printf("\n");

}


}