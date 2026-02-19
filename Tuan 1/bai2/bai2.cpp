#include<stdio.h>
#include<math.h>
int R;
int main()
//in ra man hinh yeu cau nhap ban kinh R
{	printf("Nhap vao ban kinh hinh cau R :");
	scanf("%d",&R);
//in ra ket qua
	printf("Dien tich hinh cau la: %f\n", 4*3.14*pow(R,2));
	printf("The tich hinh cau la: %f\n", (4*3.14*pow(R,3))/3);
}
