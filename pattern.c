#include<stdio.h>
#include<math.h>
#include<conio.h>
int main()
{

int i,j=1;



for(i=1;i<=6;i++)
{
    
 for(j=1;j<=2;j++)
    {
if(i==1)
{printf("A B C D E F G ");}

else if(i==2)
{printf("A B C D E F    ");}

else if(i==3)
{printf("A B C D E       ");}

else if(i==4)
{printf("A B C D          ");}


else if(i==5)
{printf("A B C              ");}


else if(i==6)
{printf("A B                  ");}


    }

printf("\n");

}


    return 0;
}