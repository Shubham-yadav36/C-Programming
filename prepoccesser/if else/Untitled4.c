#include<stdio.h>
#define size 10
main(){
    int i,j;
    for(i=1;i<=size;i++){
        for(j=1;j<=i;j++){
            printf(" %d ",j);
        }
        printf("\n");
    }

}
