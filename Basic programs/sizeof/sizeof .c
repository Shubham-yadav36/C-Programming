#include<stdio.h>
void main()
{
    int a = sizeof(int);
    int b = sizeof(char);
    int c = sizeof(float);
    int d = sizeof(double);
    printf("the size of int : %d bytes\n",a);
    printf("the size of char : %d bytes\n",b);
    printf("the size of float : %d bytes\n",c);
    printf("the size of double : %d bytes\n",d);
    getch();
}
