#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    int n;
      void pattern();
      int fibonacci(int n);
    //int series(int);

    printf("enter 1 for pattern : ");
    scanf("%d",&n);
    switch(n)
    {
    case 1 :
        pattern();
        break;
    default:
        printf("invalid entry");
        break;
    }

}
void pattern()
{
    int i,j;
    for(i=0;i<5;i++)
    {
        for(j=0;j<7;j++)
        {

            gotoxy(i,19);
            if(j<=i)
                printf(" * ");
            else
                printf("   ");
                  return 0;

        }
        printf("\n");
    }

}

