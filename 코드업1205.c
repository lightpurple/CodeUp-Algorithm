#include <stdio.h>
#include <math.h>
#define big(a,b) a >= b ? a : b

int main(){
	double a,b;
	scanf("%lf %lf", &a, &b);
	
	double plus,minus,mul,div,exp;
	
	plus = a+b;
	minus = big(a-b,b-a);
	mul = a*b;
	div = big(a/b,b/a);
	exp = big(pow(a,b), pow(b,a));
	
	printf("%.6f", big(plus,(big(minus,(big(mul,(big(div,exp))))))));
	
	return 0;
} 
