#include<stdio.h>
#include<math.h>
int main(){

int a,i=0,b,c=0;

printf("your no.");
scanf("%d",&a);

while(a!=0){
b=a%2;
a=a/2;


 c=c+b*pow(2,i);


 i++;
}

printf("%d\n",i);

return 0;

}