#include <stdio.h> 
#define SIZE 99
int a[SIZE], i, in, sum=0; 
void nhaplieu(int a[], int in){
for(int i = 0; i < in; i++) { 
printf("Nhap vao a[%d]: ", i); 
scanf("%d", &a[i]);
}
}
void xuatmang(int a[], int in){

for(int i=0; i<in;i++){
	if (a[i]%2!=0)
	sum+= a[i];
	else continue;
}printf(" Tong so le la %d\n",sum);
}
main(void) { 
do { 
printf("Nhap so phan tu mang: "); 
scanf("%d", &in); } 
while (in <= 0 || in > SIZE); 
nhaplieu(a, in);
xuatmang(a, in);}
