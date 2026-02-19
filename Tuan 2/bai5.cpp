#include<stdio.h>
#include<math.h>
main(void)
{
float a, b, c, d, e, f, p;
	printf("Nhap a: ");
	scanf("%f", &a);
	printf("Nhap b: ");
	scanf("%f", &b);
	printf("Nhap c: ");
	scanf("%f", &c);
	d = a + b;
	e = a + c;
	f = b + c;
	p = (a+b+c)/2;
	if (d>c && e>b && f>a)
		{
		printf("a, b, c la 3 canh cua tam giac\n");
		printf("Dien tich cua tam giac la: %f\n", sqrt(p*(p-a)*(p-b)*(p-c)));}
		else
		printf("a, b, c khong phai la 3 canh cua tam giac\n");
}

