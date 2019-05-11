#include<stdio.h>
main(){
    int i , a[5];
    printf("enter any 5 number : ");
    for(i=1;i<=5;i++){
        scanf("%d",&a[i]);
    }
    for(i=1;i<=5;i++){
        if(i%2==0){
            printf(" %d ",a[i]);
        }
    }
}
