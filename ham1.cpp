#include<stdio.h>
int daonguoc(int n){
	 int  tmp;
    int res = 0;
    while(n > 0){
        tmp = n % 10;
        res = res * 10 + tmp;
        n = n / 10;
    }
   return res;
}
int main(){
	int n;
	printf(" nhap so nguyen duong n ");
	scanf("%d",&n);
	int a= daonguoc(n);
	printf("so dao nguoc la %d",a);
}
