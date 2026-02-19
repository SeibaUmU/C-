#include<stdio.h>
float a, b;
int main()
//in ra man hinh yeu cau nhap chieu dai a
{	printf("Nhap vao chieu dai a :");
	scanf("%f",&a);
//in ra man hinh yeu cau nhap chieu rong b
	printf("Nhap vao chieu rong b :");
	scanf("%f",&b);
//in ra ket qua
	printf("Dien tich hinh chu nhat la: %f\n", a*b);
	printf("Chu vi hinh chu nhat la: %f\n", (a+b)*2);
}
