#include<stdio.h>
#include<math.h>

int main()
{
    int n,b=12,a,m,c=1;



  


    while(b>=10)
    {
        printf("enter your no.=");
        scanf("%d",&a);
      printf("select no.for your operation\n1)factorial\n2)prime determination\n3)odd or even\n4)exit\n" );
        scanf("%d",&n);

if(n==1)
{
    for(m=1;m<=a;m++)
    {
        c=m*c;
    }
    printf("%d\n",c);


}
if(n==2)
{
for(m=1;m<=a;m++)
{  if(a%m==0)
    {printf("not prime\n");
    break;}
}
if(m==a)
{printf("prime no.\n");}

}

if(n==3)
{
    if(a%2==0)
    {printf("your no.is even.\n");}
    else
    {printf("your no. is odd.\n");}

}
 if(n==4)
 {break;}

    b++;
    }

    
    
    return 0;
}