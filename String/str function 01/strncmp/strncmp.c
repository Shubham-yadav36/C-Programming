
#include<stdio.h>
void main(){
    char fname[10];
    char lname[10];
    int n;
    printf("enter you name : ");
    gets(fname);
    printf("enter you name : ");
    gets(lname);
    n = strncmp(fname,lname,3);// only three charactr are compare
    printf("your name is %d ",n);
    getch();
}
