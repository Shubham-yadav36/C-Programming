#include<stdio.h>
#include<string.h>
void main(){
    char name[20];
    char name1[20];
    printf("enter your name : ");
    gets(name);
    strcpy(name1,name); // the data of name is copied in name1
    printf("your name is %s duplicate is %s",name,name1);

    getch();


}

