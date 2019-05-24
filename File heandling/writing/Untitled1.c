#include<stdio.h>
void main()
{
    FILE *fp;
    fp = fopen("file1.txt","w");
    char s[100];
    printf("enter any string : ");
    gets(s);
    if(fp==NULL){
        printf("file dose not exist");
        exit(1);
        }
    for(int i=0;i<strlen(s);i++){
            fputc(s[i],fp);

    }
    getch();
    fclose(fp);
    getch();
}
