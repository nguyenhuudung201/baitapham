#include <stdio.h>
int tinhtong2( int n){
    float sum = 0; 
    for(int i = 1; i <= n; i++){
        sum += (float)1/i;
    }
    return sum;
}
int main(){
	int n;
	printf("nhap so n:");
	scanf("%d",&n);
	float a=tinhtong2(n);
	printf("ket qua la %f ",a);
}
