#include<stdio.h>
void main()
{
    float *i;
    float *func();
    i = func();
    printf("%u",i);
    getch();

}
float *func()
{
    float x=5;
    return(&x);
}
