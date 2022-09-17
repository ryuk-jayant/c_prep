#include<stdio.h>
#include<math.h>

void main()
{
int arr[3][3],i,j,t=0;

for(i=0;i<=2;i++)
{
    for(j=0;j<=2;j++,t++)
    {
        arr[i][j]=i+j;
    }
}


t=0;
for(i=0;i<=2;i++)
{
    for(j=0;j<=2;j++)
    {
        if(i!=j)
        {if(arr[i][j]==arr[j][i])
        {t++;}
        }    
    }
}
if(t>=3)
{printf("matrix is syy.%d",t);}
else
{printf("matrix is not syy.");}
printf("\n");
}