#include<stdio.h>
int main(){
	int a,b;
	if(a==0 || b==0){
		return a+b;
	}
	while(a!=b){
		if(a>b){
			a-=b;
	}else{
		b-=a;
	}
}
return a;
}
