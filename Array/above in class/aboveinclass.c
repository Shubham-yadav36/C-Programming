#include<stdio.h>
void main(){
    int i,max;
    int marks[5];
    for(i=0;i<5;i++){
        printf("the student roll number is %d and enter marks out of 100 : ",i+1);
        scanf("%d",&marks[i]);
    }
    for(i=0;i<5;i++){
        if( marks[i]>max){
            max=marks[i];
            }
    }
             printf("the highest marks of the student %d",marks[i]);

    getch();




}


