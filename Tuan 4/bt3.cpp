#include <stdio.h>
main(void)
{
int i, N;
printf("Nhap vao so n: ");
scanf("%d", &N);
for(i=1;i<=N;i++)
       {if (N%i==0)
         printf(" Co uoc la %d\n",i);
       }
}
