struct student{
    char student_name[20];
    char student_fathername[20];
    char student_mothername[20];
    };
#include<stdio.h>
void main()
{
    struct student d1;
        printf("enter studnet name , father name , mother name : ");
        gets(d1.student_name);
        fflush(stdin);
        printf("\n");
        gets(d1.student_fathername);
        printf("\n");
        fflush(stdin);
        gets(d1.student_mothername);

        printf("the student info : %s \nfathers name = %s \n mother name = %s",&d1.student_name,&d1.student_fathername,&d1.student_mothername);

}
