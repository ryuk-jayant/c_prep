#include<stdio.h>
#include<math.h>
int deter(int* ,int a);
void main(){
int a,b,arr[5][5],i,j;

for(i=0;i<=4;i++){

    for(j=0;j<=4;j++){

        arr[i][j]=i+j+2;

}

}

for(i=0;i<=4;i++){

    for(j=0;j<=4;j++){

        printf("%d   ",arr[i][j]);

}
printf("\n");
}
b=sizeof(arr);
a=deter(&arr[0][0],b);
printf("determinant is %d\n",a);


}
int deter(int *pointer,int a ){

printf("%d\n",a);



return 0;

}