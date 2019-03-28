#include<stdio.h>
#include<string.h>
void main(){
    char fname[10];
    printf("enter your name : ");
    gets(fname);
    printf("Your name is %s",strlwr(fname));
    getch();
}

