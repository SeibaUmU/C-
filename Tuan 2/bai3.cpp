#include<stdio.h>
#include<math.h>
main(void)
{
float a, b, c, delta;
	printf("Nhap a: ");
	scanf("%f", &a);
	printf("Nhap b: ");
	scanf("%f", &b);
	printf("Nhap c: ");
	scanf("%f", &c);
	printf("Chuong trinh tinh phuong trinh bac 2: ax^2 +bx +c=0\n");
	delta = b*b-4*a*c;
	if (delta > 0)
		printf("Phuong trinh co 2 nghiem phan biet x1= %f, x2= %f", (-b+sqrt(delta))/(2*a), (-b-sqrt(delta))/(2*a));
		else
		if (delta==0)
			printf("Phuong trinh co nghiem kep x1=x2= %f\n", -b/(2*a));
			else
			printf("Phuong trinh vo nghiem\n");
}
