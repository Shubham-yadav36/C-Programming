/*printf("your name is %d ",i);
    */

#include<stdio.h>
#include<string.h>
void main(){
    char fname[20]="mohan";
    char lname[20];
    printf("enter you name : ");
    gets(fname);
    printf("enter you name : ");
    gets(lname);
    printf("the name before set %s",fname);
    strset(fname,lname);
    printf("your name is %s ",fname);
    getch();
}

