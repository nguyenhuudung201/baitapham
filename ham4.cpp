#include<stdio.h>
int tinhtong(int n)
{
    int i;
    long S;
    S = 0;
    i = 1;
    while(i <= n)
    {
        S = S + i;
        i++;
    }
    return S;
}
int main(){
	int n;
	printf("nhap so n: ");
	scanf("%d",&n);
	int a=tinhtong(n);
	printf("ket qua la %d",a);
}
