#include<stdio.h>
void main()
{
    int choice,n;
    printf("enter any number: ");
    scanf("%d",&n);
    printf("enter 1 for cube : ");
    printf("\nenter 2 for square : ");
    scanf("%d",&choice);

    switch(choice){
    case 1:
        printf("%d",n*n*n);
        break;
    case 2:
        printf("%d",n*n);
    }
    getch();
}
