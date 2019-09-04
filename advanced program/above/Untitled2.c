#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num[] = { 200,3,44,5,6,7,8,9,10};
    int max = 1,i,min;
    for(i=0;i<=10;i++)
    {
        if(num[i]>max)
        {
            max = num[i];
        }

        if(num[i]<min){
            min = num[i];
        }
    }
    printf("the big is %d\n",max);
    printf("the big is %d",min);
    getch();
}
