#include <stdio.h>
#include<math.h>
main(void)
{
float i = 1, n, s = 0;
printf("Nhap vao so n: ");
scanf("%f", &n);
while (i <= n+1)
{
s = s + 1/i; 
i ++ ;
}
printf("Tong: %f", s);
}

