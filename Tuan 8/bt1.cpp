#include<stdio.h>
int a[5], b, c;
void nhaplieu(int a[]){
	for(int i=0; i<5; i++){
		printf("Nhap a thu %d: ",i+1);
		scanf("%d", &a[i]);
	}
	printf("Vi tri can thay the so b: ");
	scanf("%d", &b);
	printf("so b la: ");
	scanf("%d", &c);
}

void xuatmang(int a[]){
	for(int i=0; i<5; i++)
		printf("%3d", a[i]);
}
main (void){
	nhaplieu(a);
	a[b-1]=c;
	xuatmang(a);
}
