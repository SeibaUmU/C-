#include <stdio.h>
#include<math.h>
main(void)
{
int i = 0, in, is = 0;
printf("Nhap vao so n: ");
scanf("%d", &in);
while (i <= in)
{
is = is + pow(i,4); 
i ++ ;
}
printf("Tong: %d", is);
}

