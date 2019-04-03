void f1();
#include<stdio.h>
void main()
{
    f1();
    f1();

}
 void f1()
{
    static int i; //life till program end and value zero
    i++;
    printf("i = %d\n",i);
}

