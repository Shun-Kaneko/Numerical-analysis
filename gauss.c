#include <stdio.h>

double get_x1 ( double x2, double x3 ){ //x1を求める関数
	return ((10.0 - x2 - x3) / 5 );
}
double get_x2 ( double x1, double x3 ){ //x2を求める関数
	return ((12.0 - x1 - x3) / 4 );
}
double get_x3 ( double x1, double x2 ){ //x3を求める関数
	return ((13 - 2.0 * x1 - x2) / 3 );
}
double dif( double x, double y){ 
	if(x > y)  //値を比較するための関数
        	return x-y;
	else
		return y-x;
}
int main()
{
	double x1, x2, x3;
	int i;
	double numx1[i], numx2[i], numx3[i];

	x1 = x2 = x3 = 1.0;   // 初期値
        for( i = 0; i < 20; i++){ 
	x1 = get_x1( x2, x3 );
	x2 = get_x2( x1, x3 );
	x3 = get_x3( x1, x2 );

	//x1,x2,x3それぞれを配列に格納する
	numx1[i] = x1; 
	numx2[i] = x2;
	numx3[i] = x3;

	printf ( "[i=%d]  x1 = %.10f, x2 = %.10f, x3 = %.10f\n",i+1, x1, x2, x3 );
	if(dif(numx1[i], numx1[i-1]) < 0.00000001){ //x1,x2,x3それぞれの配列に入れた値とそのひとつ前の値を比較する
		if(dif(numx2[i], numx2[i-1]) < 0.00000001){ 
			if(dif(numx3[i], numx3[i-1]) < 0.00000001){ 
				printf("x1,x2,x3は収束したとみなせる\n"); //x1,x2,x3が指定した値より小さくなったら収束したと出す
				return 0;
			}
		}
	}
	}
	return 0;
}

