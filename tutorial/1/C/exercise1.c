#include "stdio.h"
#include "stdlib.h"

int main()
{
	int N = 20;
	int a = 2;
	printf("-------------------Interger---------------------\n");
	for (int i=0;i<N;i++){
		printf("%d\t", a);
		int b=a*2;
		printf("%d\t", b);
		int c=b+2;
		printf("%d\t", c);
		int d=c/2;
		printf("%d\t", d);
		a*=10;
		printf("\n");
	}

	float a_f=2.0;
	printf("-------------------Single precision floating point---------------------\n");
	for(int i=0;i<N;i++){
		printf("%f\t", a_f);
		float b_f=a_f*2;
		printf("%f\t", b_f);
		float c_f=b_f+2;
		printf("%f\t", c_f);
		float d_f=c_f/2;
		printf("%f\t", d_f);
		a_f*=10;
		printf("\n");
	}

	double a_d=2.0;
	printf("-------------------Double precision floating point---------------------\n");
	for(int i=0;i<N;i++){
		printf("%lf\t", a_d);
		double b_d=a_d*2;
		printf("%lf\t", b_d);
		double c_d=b_d+2;
		printf("%lf\t", c_d);
		double d_d=c_d/2;
		printf("%lf\t", d_d);
		a_d*=10;
		printf("\n");
	}
	return 0;
}
