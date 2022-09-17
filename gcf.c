#include<stdio.h>
#include<math.h>

int shift(int a,int b);
int main()
{
int x,y,z;
printf("enter your 2 no.");
scanf("%d %d ",&x,&y);
z=shift(x,y);

printf("%d \n",z);
    return 0;

}
int shift(int a,int b)
{
int i,c;
if(a%b==0)
{a=0;}
else
{ 
    for(i=0;i>0&&c==0;i++)
    {c=a-(a%b)*b;
    a=b;
    b=c;
    }
}



return a; 
}