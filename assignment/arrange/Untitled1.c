#include<stdio.h>
void main(){
    int A[6],B[5];
    int i,num,j;
    printf("enter any five number : ");
    for(i=0;i<6;i++)
    {
        scanf("%d",&A[i]);
    }
    for(i=0;i<6;i++)
    {
        for(j=i+1;j<6;j++){

            if(A[i]==A[j]){
                A[i] = 0;
            }
        }
    }
    for(i=0;i<6;i++)
    {
        printf("%d, ",A[i]);
    }
    getch();
}
