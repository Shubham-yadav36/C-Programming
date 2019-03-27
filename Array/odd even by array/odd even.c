#include<stdio.h>
void main(){
    int i;
    int num[10];
    for(i=0;i<9;i++){
        printf("enter the numbers : ");
        scanf("%d",&num[i]);
    }
    for(i=0;i<9;i++){
        if(num[i]%2==0){
            printf("the number = %d is even \n",num[i]);
        }
        else{
            printf("the number = %d is odd\n",num[i]);
        }
    }
    getch();

}
