#include<stdio.h>
#include<math.h>
int a;
int main()
//in ra yeu cau nhap 1 so a bat ki
{	printf("Nhap 1 so a bat ki:");
	scanf("%d",&a);
//in ra ket qua
	printf("Binh phuong cua a la: %d\n", int (pow(a,2)));
	printf("Lap phuong cua a la: %d\n", int (pow(a,3)));
	printf("Gia tri mu 4 cua a la: %d\n",int (pow(a,4)));
}
