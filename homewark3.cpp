#include <stdio.h>
int main (){
	int N;
	printf("nhap N=");
	scanf("%d", &N);
	
	int R=0;
	
	while (N!=0){
	int D=N%10;
	R=R*10+D;
	N=N/10;
	}
	printf("So dao nguoc=%d", R);
}
