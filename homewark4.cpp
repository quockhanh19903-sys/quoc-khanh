#include <stdio.h>
int main (){
	int a, b;
	printf("nhap a=");
	scanf("%d", &a);
	
	printf("nhap b=");
	scanf("%d", &b);
	
	int i=1;
	int ucln=1;
	while(i<=a && i<=b){
		if(a%i==0 && b%i==0){
			ucln=i;
		}
		i++;
	}
	int bcnn= (a*b)/2;
	printf ("ucln=%d\n", ucln);
	printf("bcnn=%d\n", bcnn);
}
