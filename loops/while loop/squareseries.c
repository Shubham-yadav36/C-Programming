/*When in a program a single statement or a certain group of statements are to be
 executed repeatedly depending upon certain test condition
 , then while statement is used.*/
#include<stdio.h>
void main(){
    int sq=1,i=1;
    while(i<=10)
    {
        sq=i*i;
        printf("%d,",sq);
        i++;
    }
    getch();
}
