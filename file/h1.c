#include<stdio.h>

void main()
{
    int i;
    char s[6];
    printf("write your name\n");

    for(i=0;i<6;i++)
    {
    scanf("%c",&s[i]);
    }
    printf("hello world\n");
    for(i=0;i<6;i++)
    {
    printf("%c",s[i]);
    }
printf("\n");
}