#include <stdio.h>
#include<math.h>
main(void)
{
int i = 1, in, is = 0;
printf("Nhap vao so n: ");
scanf("%d", &in);
while (i <= in)
{
	if(i%2!=0)
    is = is + pow(i,2); 
i ++ ;
}
printf("Tong: %d", is);
}

