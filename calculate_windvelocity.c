#include<stdio.h>
#include<math.h>
float main()
{   
    float wcf,v,t;

    printf("enter wind velocity");
    scanf("%f",v);

     printf("enter tempature(c')");
    scanf("%f",t);

wcf=35.74+0.6215*t+((0.427*t)-35.75)*pow(v,0.16);

    printf("%f\n",wcf);

    return wcf;

}