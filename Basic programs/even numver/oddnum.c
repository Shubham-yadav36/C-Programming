#include<stdio.h>
void main(){
    int a;
    printf("\nenter the value: ");
    scanf("%d",&a);
    if(a%2!=0){
        printf("the number %d is odd",a);
    }
    else
        printf("the number %d is Even",a);
        getch();

}
