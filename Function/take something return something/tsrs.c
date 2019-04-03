
#include<stdio.h>
#include<conio.h>
int main(){
    int add,x;
    int sum(int);
    printf("enter any number to find square: ");
    scanf("%d",&x);
    add = sum(x);
    printf(" the square is %d",add);
}
int sum(int a){

    return(a*a);



}
