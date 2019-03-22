#include<stdio.h>
struct student
{
int ROLL;
char NAME[15];
int S1T1,S1T2,S1T3,S1T4,S2T1,S2T2,S2T3,S2T4,S3T1,S3T2,S3T3,S3T4
,S4T1,S4T2,S4T3,S4T4,S5T1,S5T2,S5T3,S5T4,S6T1,S6T2,S6T3,S6T4;
}STUD[12]={
{1,"GANESH"  ,25,6,28,6,35,8,26,4,35,6,34,7,27,7,36,5,34,7,31,8,35,7,26,9},
{2,"MAHESH"  ,35,6,26,7,31,6,36,8,25,5,29,6,28,9,37,9,27,7,34,6,31,5,31,8},
{3,"SURESH"  ,21,9,27,7,26,7,28,7,31,6,29,6,28,9,37,9,27,7,34,6,31,5,31,8},
{4,"KALPESH" ,28,9,37,9,27,7,34,6,31,5,31,8,21,9,27,7,26,7,28,7,31,6,29,6},
{5,"RAHUL"   ,27,7,36,5,34,7,31,8,35,7,26,9,21,9,27,7,26,7,28,7,31,6,29,6},
{6,"SUBBU"   ,29,9,34,7,38,9,37,7,34,9,36,8,25,8,37,9,34,7,35,7,27,9,26,7},
{7,"RAKESH"  ,25,8,37,9,34,7,35,7,27,9,26,7,29,9,34,7,38,9,37,7,34,9,36,8},
{8,"ATUL"    ,25,6,38,7,35,8,25,7,27,9,26,6,27,7,36,5,34,7,31,8,35,7,26,9},
{9,"DHARMESH",35,6,37,7,34,8,36,8,37,7,34,9,28,9,37,9,27,7,34,6,31,5,31,8},
{10,"AJAY"   ,35,7,37,6,34,5,35,7,37,6,36,5,21,9,27,7,26,7,28,7,31,6,29,6},
{11,"ABDUL"  ,25,5,28,7,25,5,26,6,25,6,34,5,35,6,26,7,31,6,36,8,25,5,29,6},
{12,"RASHMI" ,35,7,38,5,25,6,36,5,35,4,26,5,25,6,28,6,35,8,26,4,35,6,34,7}
};
void main()
{
int ROL_NO;
void gen_result(int);
printf("ENTER roll no (1 to 12) : ");
scanf("%d",&ROL_NO);
if(ROL_NO>0 && ROL_NO<13)
gen_result(ROL_NO);
else
printf("\nYOU HAVE ENTERED WRONG ENROLMENT NO. !!");
getch();
}
void gen_result(int ROLL)
{
char STATUS;
int M01,M02,M03,M04,M05,M06;
M01=STUD[ROLL-1].S1T1+STUD[ROLL-1].S1T2+STUD[ROLL-1].S1T3+STUD[ROLL-1].S1T4;
M02=STUD[ROLL-1].S2T1+STUD[ROLL-1].S2T2+STUD[ROLL-1].S2T3+STUD[ROLL-1].S2T4;
M03=STUD[ROLL-1].S3T1+STUD[ROLL-1].S3T2+STUD[ROLL-1].S3T3+STUD[ROLL-1].S3T4;
M04=STUD[ROLL-1].S4T1+STUD[ROLL-1].S4T2+STUD[ROLL-1].S4T3+STUD[ROLL-1].S4T4;
M05=STUD[ROLL-1].S5T1+STUD[ROLL-1].S5T2+STUD[ROLL-1].S5T3+STUD[ROLL-1].S5T4;
M06=STUD[ROLL-1].S6T1+STUD[ROLL-1].S6T2+STUD[ROLL-1].S6T3+STUD[ROLL-1].S6T4;
printf("\n\t\t\tINDIRA GANDHI CBSE HIGH SCHOOL");
printf("\n\t\t\tPROGRESS CARD : (2018-2019)");
printf("\n\n\tROLL NO.\t: %d",ROLL);
printf("\n\tNAME\t\t: %s",STUD[ROLL-1].NAME);
printf("\n\tSTANDARD \t: VIII\t\tDIV\t: A");
printf("\n\t_______________________________________________________________");
printf("\n\tCOURSE\t\t1_TERM\t2_TERM\t3_TERM\t4_TERM\tTOTAL");
printf("\n\t CODE\t\t(40%)\t(10%)\t(40%)\t(10%)\t(100%)\tSTATUS");
printf("\n\t_______________________________________________________________");
if(M01<40) STATUS='F'; else STATUS='P';
printf("\n\tENGLISH\t\t%d\t%d\t%d\t%d\t%d\t%c",STUD[ROLL-1].S1T1,STUD[ROLL-1].S1T2,STUD[ROLL-1].S1T3,STUD[ROLL-1].S1T4,M01,STATUS);
if(M02<40) STATUS='F'; else STATUS='P';
printf("\n\n\tHINDI\t\t%d\t%d\t%d\t%d\t%d\t%c",STUD[ROLL-1].S2T1,STUD[ROLL-1].S2T2,STUD[ROLL-1].S2T3,STUD[ROLL-1].S2T4,M02,STATUS);
if(M03<40) STATUS='F'; else STATUS='P';
printf("\n\n\tMATHS\t\t%d\t%d\t%d\t%d\t%d\t%c",STUD[ROLL-1].S3T1,STUD[ROLL-1].S3T2,STUD[ROLL-1].S3T3,STUD[ROLL-1].S3T4,M03,STATUS);
if(M04<40) STATUS='F'; else STATUS='P';
printf("\n\n\tSOCIAL\t\t%d\t%d\t%d\t%d\t%d\t%c",STUD[ROLL-1].S4T1,STUD[ROLL-1].S4T2,STUD[ROLL-1].S4T3,STUD[ROLL-1].S4T4,M04,STATUS);
if(M05<40) STATUS='F'; else STATUS='P';
printf("\n\n\tSCIENCE\t\t%d\t%d\t%d\t%d\t%d\t%c",STUD[ROLL-1].S5T1,STUD[ROLL-1].S5T2,STUD[ROLL-1].S5T3,STUD[ROLL-1].S5T4,M05,STATUS);
if(M06<40) STATUS='F'; else STATUS='P';
printf("\n\n\tSANSKRIT\t%d\t%d\t%d\t%d\t%d\t%c",STUD[ROLL-1].S6T1,STUD[ROLL-1].S6T2,STUD[ROLL-1].S6T3,STUD[ROLL-1].S6T4,M06,STATUS);
printf("\n\t_______________________________________________________________");
printf("\n\t\t\tP :- PASSED\t\tF :- FAILED");
}
