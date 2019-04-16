#include<stdio.h>
 main()
{
    char name[15];
    int count(char *p);
    char* reverse(char *p);
    printf("enter your name ; ");
    scanf("%s",&name);
    printf("%d",count(name));
    printf("%d",reverse(name));
}
int count(char *p)
{
    int i;
    for(i=0;*(p+i)!=NULL;i++);
    return(i);
}
char* reverse(char *p)
{
    int i,l;
    char t;
    for(l=0;*(p+l)!='\0';l++);
    for(i=0;l/2;i++)
    {
        t = *(p+i);
        *(p+i)= *(p+l-1-i);
        *(p+l-1-i) = t;

    }
    return(p);
}
