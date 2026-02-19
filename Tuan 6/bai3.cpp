#include<stdio.h>
int n,a=0;
void is_that_prime()
{	if (n==1 || n==0){
	printf("Khong phai so nguyen to");}
	else {
	for(int i=2;i<n;i++){
	if(in%i==0)
		a++;}}
	if(a==0){
	printf("so nguyen to"); }
	else {
	printf("khong phai so nguyen to");}*/
}
}}
main (void)
{	printf("Nhap n: ");
	scanf("%d", &n);
	is_that_prime();
}
