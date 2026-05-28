#include <stdio.h>
#include <math.h>
int main (){
	double P=5000.0;
	double r=0.08;
	int n=3;
	
	double A= P*pow((1+r),n);
	printf ("Tong so tien sau %d nam la: %.2lf$",n ,A);
}	
