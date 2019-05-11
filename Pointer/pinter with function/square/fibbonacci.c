#include<stdio.h>
void main()
{
void fibo_rec(int,int);
printf("\nFIBONACCI SERIES < 1000 ARE :- \n");
fibo_rec(0,1);
getch();
}
void fibo_rec(int X,int Y)
{
printf(" %d ",X);
if(Y<1000)
fibo_rec(Y,X+Y);
}
