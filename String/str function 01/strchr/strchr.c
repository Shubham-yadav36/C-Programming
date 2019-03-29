
#include<stdio.h>
#include<string.h>
void main(){
    char fname[10];
    char lname[10];
    char c;
    int i;
    printf("enter you name : ");
    gets(fname);
    i = strchr(fname,c); // now i is character pointer
    printf("your name is %d ",i);
    getch();
}
