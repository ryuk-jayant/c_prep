#include<stdio.h>
#include<math.h>

int main()
{
    int r,l,o;
    int x,y,p,q;
    
    printf("enter radius of circle=");
    scanf("%d",&r);
    printf("enter centers coordinates(x,y)=");
    scanf("%d %d",&x,&y);

    printf("enter coordinates(x,y)=");
    scanf("%d %d",&p,&q);

    l=sqrt(pow((x-p),2)+pow((y-q),2));
    o=l-r;
    if(o<0)
    {
        printf("point lie in circle\n");

    }
    else
    {
        if(o==0)
        {
            printf("point lie on circle\n");
        }
     printf("point lie outside circle\n");
     printf("value of o is%d=",o);
    }






    return 0;
}