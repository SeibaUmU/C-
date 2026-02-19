#include <stdio.h> 
#include <conio.h> 
main(void) 
{ 
int ithang, inam; 
printf("Nhap vao thang: "); 
scanf("%d", &ithang);
switch(ithang) {
case 1: case 3: case 5 : case 7 : case 8 : case 10 :case 12 : printf("31 ngay.\n"); break; 
case 4: case 6: case 9 : case 11 : printf("30 ngay.\n"); break; 
case 2: 
printf("Nhap vao nam: "); 
scanf("%d", &inam);
if (inam%4==0) {
	printf("29 ngay\n");
} else {
	printf("28 ngay\n");
} 
break;
default: printf("Ban phai nhap so trong khoang 1..12\n"); 
}
} 

