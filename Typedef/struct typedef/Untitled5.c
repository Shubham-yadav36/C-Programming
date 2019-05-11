typedef struct BOOK{
    char name[20];
    float prise;
    int year;
}Book;
#include<stdio.h>
#include<string.h>
main(){
    Book b1;
    strcpy(b1.name,"programming in c");
    b1.prise = 200.30;
    b1.year = 2018;
    printf("\nbook name : %s",b1.name);
    printf("\nbook prise : %f",b1.prise);
    printf("\nbook year : %d",b1.year);
    getch();


}
