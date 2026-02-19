#include<stdio.h>
#include<math.h>
main (void){
int a,b,ucln,bcnn;
printf("Nhap so a:\n");
scanf("%d,", &a);
printf("Nhap so b:\n");
scanf("%d", &b);
for(int i=1;i<=a||i<=b;i++){
if(a%i==0&&b%i==0)
ucln=i;
bcnn=a*b/ucln;}
printf("UCLN: %d\n", ucln);
printf("BCNN: %d", bcnn);

}
