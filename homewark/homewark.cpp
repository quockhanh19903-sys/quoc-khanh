#include <stdio.h>
#include <math.h>
int main (){
	float a;
	printf("nhap a=");
	scanf("%f", &a);
	
	float b;
	printf("nhap b=");
	scanf("%f", &b);
	
	float c;
	printf("nhap c=");
	scanf("%f", &c);
	
	if(a==0){
		if(b==0){
			if(c==0){
				printf("PT vo so nghiem");
			}else{
				printf("PT vo nghiem");
			}
		}else{
			float x=-c/b;
			printf("PT co mot nghiem");
		}
	}else{
			float delta=b*b-4*a*c;
		if (delta<0){
			printf("PT vo nghiem");
		}else if (delta==0){
			float x=-b/(2*a);
			printf("PT co nghiem kep:x=%f", x);
		}else{
			float x1=(-b+sqrt(delta	))/(2*a);
			float x2=(-b-sqrt(delta))/(2*a);
		printf("PT co 2 nghiem phan biet");
		printf("x1=%f",x1);
		printf("x2=%f",x2);
		}
	}
		
	
		
}
