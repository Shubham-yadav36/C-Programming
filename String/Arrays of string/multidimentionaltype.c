#include<stdio.h>
void main(){
    char name[3][10]={"ramesh","ram","rakesh"}   ;/*there are two value for the string 1 value is for the number of string and
                        the 2nd vlaue of for the maximum size of the srings */
    int i;
    for(i=0;i<3;i++){
            printf("%s\n",name[i]);
    }
    getch();


}

