union value{
        int x;
        float y;
        char a;
    };
#include<stdio.h>
void main()
{
    // the actual memory in this program is 4bytes if we want to print value of any var 2nd time it print null
    union value x1;
        x1.x= 10;
        printf("\nx=%d",x1.x);
        x1.y= 20.2;
        printf("\ny=%f",x1.y);
        x1.a = 's';
        //printf("\nx=%d",x1.x);
        printf("\na= %c ",x1.a);
}
