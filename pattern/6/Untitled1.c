#include<stdio.h>
void main()
{
    int i,j;
    char name[]= "SHUBHAMYADAV";
    for(i=0;i<12;i++)
    {
        j = i+1;
        printf("%-12.*s\n",j,name);

    }
    for(i=11;i>=0;i--)
    {
        j = i+1;
        printf("%-12.*s\n",j,name);
    }
}
