#include<stdio.h>
#include<stdio.h>
void main()
{
char HEXC[5];
int NUM,Y,I,LEN,HEXD[5];
printf("ENTER DECIMAL NUMBER TO BE CONVERTED : ");
scanf("%d",&NUM);
LEN=0;
Y=NUM;
while(Y>0)
{
HEXD[LEN]=Y%16;
Y=Y/16;
LEN++;
};
for(I=LEN-1;I>-1;I--)
{
if(HEXD[I]<10)
HEXC[I]=HEXD[I]+48;
else
HEXC[I]=HEXD[I]+55;
}
printf("\nCONVERTED BINARY EQUIVALENT VALUE OF %d IS ",NUM);
for(I=LEN-1;I>-1;I--)
{
printf("%c",HEXC[I]);
}
getch();
}
