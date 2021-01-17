#include <stdio.h>
#define cmp(a) a<2000 ? 1 : 3

int main(){
	int age;
	scanf("%d", &age);
	
	printf("%d %d", (2013-age)%100, cmp(2013-age));
	
	return 0;
}
