#include<stdio.h>
void main()
{
    int i,max;
    int marks[4]={3,4,56,55};
    for(i=0;i<4;i++){
        if(marks[i]>max){
            max = marks[i];
        }
    }
    printf("%d",marks[i]);
}
