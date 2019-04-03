#include<stdio.h>
void main()
{
    int i=1,n;
    int res=1;
    printf("enter the number for factorial: ");
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        res= res*i;
    }
    printf("the total is : %d",res);
}
/*How it works?
Suppose we call this function with n = 5
Iterations:
1. i= 5 res = 1*5 = 5
2. i= 4 res = 5*4 = 20
3. i= 3 res = 20*4 = 60
4. i= 2 res = 60*2 = 120
5. i= 1 res = 120*1 = 120
*/
