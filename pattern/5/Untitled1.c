#include<stdio.h>
void main()
{
    int i,j;
    static k = 0;
    char s[]="SHUBHAM";
    for(i=0;i<=6;i++)
    {
        for(j=0;j<=i;j++)
            printf("%c",s[j]);
        printf("\n");
    }
    for(i=6;i>=0;i--)
    {


        for(j=6;j>=0;j--)
        {
            printf("%c",s[k]);
            k = k+1;

        if(k!=0)
            k = 0;
        }

        printf("\n");


    }
    getch();
}
