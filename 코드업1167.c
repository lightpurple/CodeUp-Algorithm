#include <stdio.h>
#define median(a,b,c) a>b ? (a>c ? (b>c ? b : c) : a) : (b>c ? (a>c ? a : c) : b)

int main(){
	int a,b,c;
	scanf("%d %d %d", &a, &b, &c);
	printf("%d", median(a,b,c));
	return 0;
} 
