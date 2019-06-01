#include<stdio.h>
void main()
{
    int i,j;
    char s[]={'C','O','B','O','L'};
    for(i=1;i<=5;i++)
    {
        for(j=1;j=i;j++)
            printf("%s",s[j]);
        printf("\n");
    }
    getch();
}
