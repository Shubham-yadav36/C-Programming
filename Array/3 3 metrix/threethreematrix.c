#include<stdio.h>
int main()
{
   static int A[3][3],B[3][3],i,j,n;
    printf("enter the 9 element for the first martix : \n");
    void add(int A[3][3], int B[3][3]);
    for(i=0;i<=2;i++){
        for(j=0;j<=2;j++)
            scanf("%d",&A[i][j]);
    }
    printf("enter the 9 element for the second matrix : \n");
    for(i=0;i<=2;i++){
        for(j=0;j<=2;j++)
            scanf("%d",&B[i][j]);
    }
    printf("enter 1 for addition and 2 for substraction : ");
    scanf("%d",&n);

    switch(n)
    {
    case'1' :void  add( static int A[3][3],static int B[3][3]);
        break;
    }
    void add(static int A[3][3],static int B[3][3])
    {
        int i,j,sum[3][3];
        printf("the addition is : \n");
        for(i=0;i<=2;i++){
            for(j=0;j<=2;j++)
                sum[i][j]=A[i][j]+B[i][j];
                printf("%d  ",sum[i][j]);
        }
        printf("\n");
    }


}


