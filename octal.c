#include<stdio.h>
#include<math.h>

int main()
{
    int i,r,r1,q,n=1;

    printf("give us an integer=");
    scanf("%d",&i);
    
while(n>=1)
{

if(n==1)
{
    r1=i%8;
}
else
{
    r1=i%8;
}


printf("%d\n",r1);
i=i/8;


if(i==0)
{
    break;
}
n++;

}



    return 0;
}