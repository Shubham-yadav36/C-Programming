#include <stdio.h>
#include <conio.h>
void main () {
/* local variable definition */
int a=2;
/* while loop execution */
while( a <= 20 )
{
printf("value of a: %d\n", a);

a=a+2;
if( a >= 11) {
/* terminate the loop using break statement */
break;
}
}
getch();
}
