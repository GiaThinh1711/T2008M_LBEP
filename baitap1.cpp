#include <stdio.h>
int main(){
	int a,b,c;
	printf("Nhap a=");
	scanf("%d",&a);
	printf("Nhap b=");
	scanf("%d",&b);
	printf("Nhap c=");
	scanf("%d",&c);
	// kiem tra a va b
	if(a<b){
		// a la so be	
		if(a<c){
			printf("Min: %d",a);
		}else{
			printf("Min: %d",c);
		}	
	}else{
		// b la so be
		if(b<c){
			printf("Min: %d",b);
		}else{
			printf("Min: %d",c);
		}
	}	
}
// DIT ME THE GIOI
// DIT CU HAZI
// DIT CU HUONG GIANG
// DIT CU THAO HIEN
