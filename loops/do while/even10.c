#include<stdio.h>
void main()
{
    int i=0,j=2;
    do {
         printf("%d,",j);
        j=j+2;
        i++;
    }while(i<10);
    getch();
}
