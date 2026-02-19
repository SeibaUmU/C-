#include <stdio.h> 
#define SIZE 59
int a[SIZE], k, i, in,temp; 
void nhaplieu(int a[], int in){
for(int i = 0; i < in; i++) { 
printf("Nhap vao a[%d]: ", i); 
scanf("%d", &a[i]);}
}
void xuatmang(int a[], int in){
	for (i=0;i<in-1;i++){
		for(k=i+1;k<in;k++)
		{
	if (a[i]<a[k]){
	temp=a[i];
	a[i]=a[k];
	a[k]=temp;
	}}}}
main(void) {
do { 
printf("Nhap so phan tu mang: "); 
scanf("%d", &in); } 
while (in <= 0 || in > SIZE); 
nhaplieu(a,in);
xuatmang(a, in);
for (i=0; i<in; i++){
printf("%3d", a[i]);}
}
