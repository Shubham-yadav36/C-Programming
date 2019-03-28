#include<stdio.h>
#include<string.h>
void main(){
    char fname[10];
    char lname[10];
    printf("enter your name : ");
    gets(fname);
    printf("enter your name : ");
    gets(lname);
    printf("Your name is %d",strspn(fname,lname));
    getch();
}

