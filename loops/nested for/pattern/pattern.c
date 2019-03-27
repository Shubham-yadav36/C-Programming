#include<stdio.h>
void main(){
    int i=1,j=1;
    for(i=j;i<4;i++){
        printf("%d ",j);
            for(j=i;j<i;j++)
                printf("%d",j);

    }
    getch();
}
