#include<stdio.h>
#include<math.h>
long int a, b, c , d;
int main()
//in ra yeu cau nhap so giay bat ki
{	printf("Nhap so giay bat ki:");
	scanf("%d",&a);
//tinh toan doi giay ra phut gio
	b = a/3600; //gio
	c = a%3600/60; //phut
	d = a%3600%60; //giay
//in ra ket qua
	printf("Gio:Phut:Giay: %2d:%2d:%2d\n", b, c, d);
}

