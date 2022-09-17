#include<stdio.h>


int quicksort(int * a,int size);

int main()
{
	int i,j,size,ini,fin;
	
	scanf("%d",&i);
	while(i!=0){
        printf("your size");
	    scanf("%d",&size);
	    
	    int arr[size];


	    j=size-1;
	    while(j>=0){
            printf("element no. %d\n",j);
	        scanf("%d",&arr[j]);
	    j--; 
	    }
	   quicksort(arr[0],size);
	    
	
	    // for(j=0;j<size;j++){
		// 	printf("%d\n",arr[j]);
		// }
	    
	    i--;
	}
return 0;

}
int quicksort(int * a,int size){

a=(size-1)*sizeof(int);
size--;
while(size>=0){
	if()


	size--
}


}