#include<stdio.h>
int main(){
	int i;
	int  f1 = 0, f2 = 1, f3= 1;
	printf("\nChuoi Fibonacci tu 1 den 100 la: ");
	for( i = 3;i < 12;i++){
			f1 = f2;
			f2 = f3;
			f3 = f1 + f2;
	 	 if(f3>100){
				break;
			}		
		}
			printf(" %d",i,f3);			
	}
				
	

