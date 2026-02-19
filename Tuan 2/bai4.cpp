#include<stdio.h>
main(void)
{
float a, b, c, tong;
	printf("Nhap diem Toan: ");
	scanf("%f", &a);
	printf("Nhap diem Ly: ");
	scanf("%f", &b);
	printf("Nhap diem Hoa: ");
	scanf("%f", &c);
	tong = a + b + c;
	if ((tong>=15) && (a>=4, b>=4, c>=4))
		{
		printf("Dau\n");
			if (a>5 && b>5 && c>5)
			printf("HOC DEU CAC MON\n");
			else
			printf("HOC CHUA DEU CAC MON\n");}
		else
		printf("THI HONG");
}

