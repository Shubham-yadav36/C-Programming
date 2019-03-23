#include<stdio.h>
void main(){
    int day;
    printf("enter the numver(1 to 7) : ");
    scanf("%d",&day);
     switch(day)
     {
        case 1:"1";
            printf("today is sunday");
            break;
        case 2:"2";
            printf("today is monday");
            break;
        case 3:"3";
            printf("today is tuesday");
            break;
        case 4:"4";
            printf("today is wednesday");
            break;
        case 5:"5";
            printf("today is thusday");
            break;
        case 6:"6";
            printf("today is friday");
            break;
        case 7:"7";
            printf("today is saturday");
            break;
     }
     getch();

}
