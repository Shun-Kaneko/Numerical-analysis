#include <stdio.h>
#include <math.h>
double f(double x);   //f(x)の関数
double _f(double x);  //f(x)の導関数

int main(void){
	double x = 5.0 ;  //初期値
	double eps = 0.0000000001;  //目標とする誤差
	double n_max = 30;  //最大繰り返し回数
	double d;   
	int n = 0;

	do {
		d = -f(x) / _f(x);
		x = x + d;
		printf("x = %.10f\n", x);
		n++;
	}
	while( fabs(d) > eps && n <= n_max);   //fabs関数はdouble型の絶対値を計算する関数
	printf("収束した\n");
}

double f(double x) {   
	return -11*x*x*x*x*x*x*x*x + 12*x*x*x*x*x*x*x + 19*x*x*x*x*x*x -4*x*x*x*x*x + 20*x*x*x*x + 14*x*x*x - 1*x*x + 5*x -18 ;
}
double _f(double x) {  
	return -88*x*x*x*x*x*x*x + 84*x*x*x*x*x*x + 114*x*x*x*x*x - 20*x*x*x*x + 80*x*x*x + 42*x*x - 2*x + 5;
}
