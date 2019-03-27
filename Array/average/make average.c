#include<stdio.h>
#define size 5
void main(){
    int i,sum[size],avg[size];
    int math[size],hindi[size];
    for(i=0;i<size;i++){
        printf("enter math marks out of 50 : ");
        scanf("%d",&math[i]);
    }
    for(i=0;i<size;i++){
        printf("enter hindi marks : ");
        scanf("%d",&hindi[i]);
    }
    for(i=0;i<size;i++){

        sum[i]=math[i]+hindi[i];
    }
    for(i=0;i<size;i++){
        avg[i]=sum[i]/2;
        printf("the roll = %d of student has Average= %d\n",i+1,avg[i]);

    }
    getch();

}
