#include<stdio.h>
#include<math.h>
int main(){
	int n,S;
	printf("Nhap n vao day: ");
	scanf("%d",&n);
	int V = 0;
	while(n>0){
	S = n % 10;
	V = V*10 + S;
	n/=10;
	}
	printf("So nghich dao la: %d",V);
}
