#include<stdio.h>
#include<string.h>
void main(){
    char fname[10];
    char lname[10];
    printf("enter your first name : ");
    gets(fname);
    printf("enter your last name : ");
    gets(lname);
    strcat(fname,lname); // revese of the given string
    printf(" Your full name is '%s'",fname);
    getch();
}

