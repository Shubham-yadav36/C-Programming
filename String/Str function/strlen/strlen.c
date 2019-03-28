#include<stdio.h>
void main(){
    char name[20];
    int i;
    printf("enter your name without space : ");
    gets(name);
    i= strlen(name);
    printf("your name is %s and length is %d",name,i);

    getch();


}

