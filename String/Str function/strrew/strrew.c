#include<stdio.h>
#include<string.h>
void main(){
    char name[20];
    printf("enter your name : ");
    gets(name);
    strrev(name); // revese of the given string
    printf(" reverse of your name is '%s'",name);
    getch();
}

