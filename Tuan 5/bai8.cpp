#include<stdio.h>
#include<math.h>
main (void){
	int n,count=0;
	printf("Nhap n: ");
	scanf("%d", &n);
	if(n<2) 	{
	printf("khong phai so nguyen to");}
	else{
	
	for(int i=2;i<n;i++){
	if(n%i==0){
		count++;}}
	if(count==0){
	
	printf("so nguyen to"); }

	else {
	printf("khong phai so nguyen to");}}
}

