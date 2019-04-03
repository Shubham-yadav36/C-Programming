void f1();
#include<stdio.h>
void main()
{   extern int i; //life till program end and value zero
    printf("i = %d\n",i);
    f1();
    f1();

}
int i;
 void f1()
{

    i++;
    printf("i = %d\n",i);
}

