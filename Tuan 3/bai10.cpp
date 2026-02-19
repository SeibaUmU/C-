#include<stdio.h>
#include<conio.h>
main (void)
{
int a, b, c;
printf("Nhap a: ");
scanf("%d", &a);
printf("Nhap b: ");
scanf("%d", &b);
printf("Nhap c: ");
scanf("%d", &c);
if (a>b){
	if (a>c){
		if (b>c) {
		printf("%d %d %d\n", c, b, a);}
		else
		printf("%d %d %d\n", b, c, a);}
	else
	printf("%d %d %d\n", b, a, c);}
else
	if (b>c){
		if (c>a){
		printf("%d %d %d\n", a, c, b);}
		else
		printf("%d %d %d\n", c, a, b);}
	else
	printf("%d %d %d\n", a, b, c);
}
