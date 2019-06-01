#include<stdio.h>
void main()
{
    char s[50],i;
    printf("enter any string in lower : ");
    gets(s);

    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]==' ')
            continue;
        else
               s[i]=s[i]+32;

    }
        printf("%s",s);
    getch();
}
