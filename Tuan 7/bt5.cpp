#include <stdio.h> 
#define SIZE 79
int a[SIZE], in; 
void nhaplieu(int a[], int in){
for(int i = 0; i < in; i++) { 
printf("Nhap vao a[%d]: ", i); 
scanf("%d", &a[i]);}
}
int kiemtrasnt(int n){
		if (n<2){
	return 0;}
	else {
		for(int i=2;i<n;i++){
			if(n%i==0){
				return 0;
			}
			return 1;
		}
		
	}
}
void insnt(int a[], int in){
	for (int i=0; i<in; i++){
	if(kiemtrasnt(a[i])){
		printf("Gia tri so nguyen to la %d, va vi tri la a[%d]\n", a[i], i);
}
}
}
main(void) {
do { 
printf("Nhap so phan tu mang: "); 
scanf("%d", &in); } 
while (in <= 0 || in > SIZE); 
nhaplieu(a, in);
insnt(a, in);
}

