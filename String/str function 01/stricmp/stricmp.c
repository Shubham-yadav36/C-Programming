/*The stricmp function is same as strcmp, except it compares two strings ignoring the case (lower and upper case).*/
#include<stdio.h>
void main(){
    char fname[10];
    char lname[10];
    int n;
    printf("enter you name : ");
    gets(fname);
    printf("enter you name : ");
    gets(lname);
    n = stricmp(fname,lname);
    printf("your name is %d ",n);
    getch();
}
