#include<stdio.h>
	int max(int a,int b,int c){
		if(a>b&&a>c){
			return a;
		}else if(b>c&&b>a){
			return b;
		}return c;
          			
	}
	int main(){
	int x;
	int y;
	int z;
	printf("nhap x :");
	scanf("%d",&x);
	printf("nhap y:");
	scanf("%d",&y);
	printf("nhap z:");
	scanf("%d",&z);
	int a= max(x,y,z);
	printf("so lon nhat la %d",a);
}
	
