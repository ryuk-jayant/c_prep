#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main(){

FILE *fp;
char ch;

fp=fopen("h1.c","r");

if(fp==NULL){
    printf("can not open file");
    exit(1);
}

fclose(fp);

}