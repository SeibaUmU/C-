#include <stdio.h> 
#include<math.h>
#define SIZE 49
int tbp=0;
int a[SIZE], i, in;
void nhaplieu(int a[], int in){
for(int i = 0; i < in; i++) { 
printf("Nhap vao a[%d]: ", i); 
scanf("%d", &a[i]);
if (a[i]>0) continue;
else
a[i]=a[i]*0;
break;
 }
}
void tinhtongbinhphuong(int a[], int in){
for(int i = 0; i < in; i++) 
tbp += pow(a[i],2); 
printf("Tong binh phuong : %d\n", tbp);}
main(void) { 
do { 
printf("Nhap so phan tu mang: "); 
scanf("%d", &in); } 
while (in <= 0 || in > SIZE);
nhaplieu(a,in);
tinhtongbinhphuong(a,in);
}

