
#include<stdio.h>
#include<math.h>
int main()
{   
    int arr[4],a,i,b=0;

    for(i=0;i<=4;i++)
    {
        printf("enter your input  to arrey\n::");
        scanf("%d",&arr[i]);

    }

printf("enter your no. to be seached in array::");
scanf("%d",&a);


for(i=0,b=0;i<=4;i++)
{
    if(a==arr[i])
    {
        b++;
    }
    
}
if(b!=0)
{printf("no. is found to appear %d times in array\n",b);}
else if(b==0)
{printf("no. is not prestent in array\n");}

    return 0;

}