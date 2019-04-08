struct bookinfo{
    int bookid[10];
    char book_name[20];
    int book_prise[10];
    };
#include<stdio.h>
void main()
{
    struct bookinfo b1;
        printf("enter the book id , book name , book prise ;");
        scanf("%d",&b1.bookid);
        fflush(stdin);
        gets(b1.book_name);
        scanf("%d",&b1.book_prise);

        printf("%d\n%s\n%d",b1.bookid,b1.book_name,b1.book_prise);

}
