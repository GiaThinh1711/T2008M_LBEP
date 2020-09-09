#include<stdio.h>
#include<math.h>
int main(){
	float a,b,c,S,p,C;
	printf("Nhap canh thu nhat: ");
	scanf("%f",&a);
	printf("Nhap canh thu hai: ");
	scanf("%f",&b);
	printf("Nhap canh thu ba: ");
	scanf("%f",&c);
	if((a+b>c) && (a+c>b) && (b+c>a)){
	
	printf("\nDay la ba canh cua tam giac");
	C=a+b+c;
	p=(a+b+c)/2;
	S=sqrt(p*(p-a)*(p-b)*(p-c));
	printf("dien tich cua tam giac: %f",S);
	printf("chu vi cua tam giac: %f",C);
}else
	printf("\Day khong phai la ba canh cua tam giac");
}

