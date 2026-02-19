#include<stdio.h>
int a, b;
int main()
//in ra man hinh yeu cau nhap so a
{	printf("Nhap vao so a :");
	scanf("%d",&a);
//in ra man hinh yeu cau nhap so b
	printf("Nhap vao so b :");
	scanf("%d",&b);
//in ra ket qua
	printf("Tong cua a va b la: %d\n", a+b);
	printf("Hieu cua a va b la: %d\n", a-b);
	printf("Tich cua a va b la: %d\n", a*b);
	printf("Thuong cua a va b la: %d\n", a/b);
}

