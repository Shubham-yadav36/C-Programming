#include<stdio.h>
void main()
{
    int A[3][3],B[3][3],C[3][3],D[3][3],i,j;
    printf("enter the 9 element for the first martix : \n");
    for(i=0;i<=2;i++){
        for(j=0;j<=2;j++)
            scanf("%d",&A[i][j]);
    }
    printf("enter the 9 element for the second matrix : \n");
    for(i=0;i<=2;i++){
        for(j=0;j<=2;j++)
            scanf("%d",&B[i][j]);
    }
    printf("enter the 9 element for third matrix: \n");
    for(i=0;i<=2;i++){
        for(j=0;j<=2;j++)
            scanf("%d",&C[i][j]);
    }

    for(i=0;i<=2;i++){
        for(j=0;j<=2;j++){
            D[i][j]=A[i][j]+B[i][j]*C[i][j];
            scanf("%d  ",&D[i][j]);
        }
    for(i=0;i<=2;i++){
        for(j=0;j<=2;j++){
            D[i][j]=A[i][j]+B[i][j]*C[i][j];
            printf("%d  ",D[i][j]);
        }
        printf("\n");

    }
}
}

