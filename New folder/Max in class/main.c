#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num[] = { 2,3,4,5,6,7,8,9,10};
    int max = 1,i;
    for(i=0;i<=10;i++)
    {
        if(num[i]>max)
        {
            max = num[i];
        }
    }
    printf("the big is %d",max);
    getch();
}
