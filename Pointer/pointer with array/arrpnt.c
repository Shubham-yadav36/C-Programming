#include<stdio.h>
void main()
{
    void display(int *p);
    void sort(int *p);
    int x[5];
    void intput(a);
    input(x);
 // sort(x);
    display(x);
}
void input(int *p)
{
    int i;
    for(i=0;i<5;i++){
        printf("enter five number : ");
        scanf("%d",(p+i));
    }

}
void display(int *p)
{
    int i;
     for(i=0;i<5;i++)
    {
        printf("%d\n",*(p+i));


    }
}
