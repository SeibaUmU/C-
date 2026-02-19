#include <stdio.h> 
int a[6], k, m, i, countk=0, countm=0; 
void nhaplieu(int a[]){
for(int i = 0; i < 6; i++) { 
printf("Nhap vao a[%d]: ", i); 
scanf("%d", &a[i]);}
}
void dem(int a[]){
	for(int i=0; i<6;i++){
	if (a[i]==k)
	countk++;
	else if(a[i]==m)
	countm++;}
	printf("Co %d so k\n",countk);
	printf("Co %d so m\n",countm);
}
int main(){
nhaplieu(a);
printf("Nhap so k= ");
scanf("\n%d", &k);
printf("Nhap so m= ");
scanf("%d",&m);
dem(a);
}
