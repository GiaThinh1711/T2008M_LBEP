#include<stdio.h>
#include<math.h>
int main(){
	int a,b,c;
	float C,S,p;
	do{
	printf("Nhap canh thu nhat: ");
	scanf("%d",&a);
	printf("Nhap canh thu hai: ");
	scanf("%d",&b);
	printf("Nhap canh thu ba: ");
	scanf("%d",&c);
	}
	while(!(a+b>c && a+c>b && b+c>a));
	C=a+b+c;
	p=(a+b+c)/2;
	S=sqrt(p*(p-a)*(p-b)*(p-c));
	printf("Chu vi tam giac la: %f",C);
	printf("Dien tich tam giac la: %f",S);
	
}
