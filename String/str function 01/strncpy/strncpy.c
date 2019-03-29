/*strncpy(str1, str2, 10);
where str1 and str2 are two strings. The 10 characters of string str2 are copied onto string str1.*/
#include<stdio.h>
void main(){
    char fname[10];
    char lname[10];
    printf("enter you name : ");
    gets(fname);
    strncpy(lname,fname,10);  // the character of fname is copy in lname
    printf("your name is %s ",lname);
    getch();
}
