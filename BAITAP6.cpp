#include<stdio.h>
#include<math.h>
int main(){
	int ngay;
	printf("Nhap vao 1 ngay: ");
	scanf("%d",&ngay);
	int thang;
	printf("Nhap vao 1 thang: ");
	scanf("%d",&thang);
	int days;
	int a;
	if(ngay<=31 && thang<=12 ){
		if((
		(thang==1)||
		(thang==3)||
		(thang==5)||
		(thang==7)||
		(thang==8)||
		(thang==10)||
		(thang==12))
		&&ngay>=1 &&ngay<=31){
		}else{
			if((
			(thang==4)||
			(thang==6)||
			(thang==9)||
			(thang==11))
			&ngay>=1 &ngay<=30){
			}else{
				if(thang==2 &ngay>=1 &ngay<=28){
					printf("Cu thu lai cho den khi k thay dong nay\n");
				}
			}	
		}
		if(thang==1){
			days= ngay;
			printf("Day la ngay thu: %d",days);
		}
		if(thang==2){
			days= ngay+31;
			printf("Day la ngay thu: %d",days);
		}
		if(thang==3){
			days= ngay+31+28;
			printf("Day la ngay thu: %d",days);
		}
		if(thang==4){
			days= ngay+31+28+31;
			printf("Day la ngay thu: %d",days);
		}
		if(thang==5){
			days= ngay+31+28+31+30;
			printf("Day la ngay thu: %d",days);
		}
		if(thang==6){
			days= ngay+31+28+31+30+31;
			printf("Day la ngay thu: %d",days);
		}
		if(thang==7){
			days= ngay+31+28+31+30+31+30;
			printf("Day la ngay thu: %d",days);
		}
		if(thang==8){
			days= ngay+31+28+31+30+31+30+31;
			printf("Day la ngay thu: %d",days);
		}
		if(thang==9){
			days= ngay+31+28+31+30+31+30+31+31;
			printf("Day la ngay thu: %d",days);
		}
		if(thang==10){
			days= ngay+31+28+31+30+31+30+31+31+30;
			printf("Day la ngay thu: %d",days);
		}
		if(thang==11){
			days= ngay+31+28+31+30+31+30+31+31+30+31;
			printf("Day la ngay thu: %d",days);
		}
		if(thang==12){
			days= ngay+31+28+31+30+31+30+31+31+30+31+30;
			printf("Day la ngay thu: %d",days);
		}
		// so qua co 
		if(days % 7 == 0){
		printf("\nday la ngay CN");
		}
	if(days% 7 == 1){
		printf("\nday la ngay thu 2");
		}
	if(days % 7 == 2){
		printf("\nday la ngay thu 3");
		}
	if(days % 7 == 3){
		printf("\nday la ngay thu 4");
		}
	if(days % 7 == 4){
		printf("\nday la ngay thu 5");
		}
	if(days % 7 == 5){
		printf("\nday la ngay thu 6");
		}
	if(days % 7 == 6){
		printf("\nday la ngay thu 7");
		}
	}
	else{
	    printf("Ban da nhap sai thong");
	}
	
}
