#include<stdio.h>
#include<math.h>

int main()
{
    int r,g,b,c;
    float w,m,y,k,cy;
    
    printf("enter RGB values of your color:");
    scanf("%d %d %d",&r,&g,&b);

c=(r>g&&r>b)?(r):((g>r&&g>b)?(g):((b>r&&b>r)?(b):printf("WTH")));

w=c/255;

cy=(w-r/255)/w;

m=(w-g/255)/w;

y=(w-b/255)/w;

k=1-w;

/*printf("%d\n",c);

printf("%f\n",w);*/
printf("%f ,%f ,%f ,%f \n" ,cy,m,y,k);

printf("your CMYK color \n");


    return 0;
}