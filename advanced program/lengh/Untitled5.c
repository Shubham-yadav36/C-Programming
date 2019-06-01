#include<stdio.h>
void main()
{
    char s[20]="shubhamyadav";
    int count(char *p);
    count(&s);

    getch();
}
int count(char *p)
{
    int i;
    for(i=1;*(p+i)!='\0';i++);
    printf("the length is : %d",i);

}
