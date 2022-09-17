#include<stdio.h>
#include<math.h>

void shift(int *a,int *b,int *c);
int main()
{
int x,y,z,w;
printf("enter your 3 inputs");
scanf("%d %d %d",&x,&y,&z);
shift(&x,&y,&z);
printf("%d %d %d\n",x,y,z);
    return 0;

}
void shift(int *a,int *b,int *c)
{
int t;
t=*(b);
*b=*(a);
*a=*(c);

*c=(t);



}