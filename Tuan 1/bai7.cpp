#include<stdio.h>
int ngay, thang, nam, x;
int main()
{	printf("Nhap vao so nhom:");
	scanf("%d",&x);
	printf("Nhap vao ngay: ");
	scanf("%2d", &ngay);
	printf("Nhap vao thang: ");
	scanf("%2d", &thang);
	printf("Nhap vao nam: ");
	scanf("%4d", &nam);
	printf("\n");
	printf("TPHCM, %2d/%2d/%4d\n", ngay, thang, nam);
	printf("Mon hoc: Nhap mon lap trinh \n");
	printf("Nhom thuc hien: %d\n", x);
	printf("Sinh vien 1: Nguyen Manh Thang \n");
	printf("Sinh vien 2: Cao Quoc Trong \n");
	printf("Sinh vien 3: Huynh Huu Thien \n");
}
