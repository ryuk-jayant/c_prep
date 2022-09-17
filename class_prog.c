#include <stdio.h>

int main() {
  
   int a,i,c=0,b,d;
    
    printf("enter your no.");
    scanf("%d",&a);
    b=a;
    for(i=0;b>0;b=b/10,i++){
   
     }
     d=i;
     
    printf("length of no. is=%d \n ",d);
    for(i=0;a>0;a=a/10,i++){
    if(i==0||i==d-1){
        b=a%10;
        //printf("%d",b);
        c=c+b;
    }
     }
    printf("sum=%d\n",c);
    return 0;
}