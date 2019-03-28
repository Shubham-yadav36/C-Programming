#include<stdio.h>
#include<string.h>
void main(){
    char name[20];
    char name1[20];
    int value;
    printf("enter your name : \n");
    gets(name);
    printf("enter your name : \n");
    gets(name1);
    value = strcmp(name,name1); // check the vakue
        if(value==0)
            printf("the string %s and %s is same lenght",name,name1);
        else if(value<0)
            printf("the string %s is smaller then %s",name,name1);
        else if(value>0)
            printf("the string %s is bigger then %s",name,name1);
    getch();


}

