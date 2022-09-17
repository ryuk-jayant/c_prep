#include<stdio.h>
#include<math.h>
int main()
{   
    int arr[100],a,i,j,k;

    for(i=0;i<=100;i++)
    {
        arr[i]=i+1;

    }

for(i=0;i<=100;i++)
{ 
    if(arr[i]!=0||arr[i]!=1)
 {  a=100/arr[i];
    if(a>=2)
        {for(j=2;j<=a;j++)
   {
       for(k=0;k<=100;k++)
       {
           if(arr[k]==arr[i]*j)
           {arr[k]=0;}
       }
   }
        }
        
 }

}
for(i=0;i<=100;i++)
    {
        //if(arr[i]!=0)
        {printf("%d ",arr[i]);}

    }
printf("\n");
    return 0;

}