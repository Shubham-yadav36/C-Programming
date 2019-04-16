#include <stdio.h>
void main()
{
    int n,sq;
void periarea(int x, float *);
printf("\nEnter any number: \n");
scanf("%d",&n);
periarea(n,&sq);
printf("\ndquare is %d",sq);
}
void periarea(int n,float *square)
{
  *square = n**2;
}
