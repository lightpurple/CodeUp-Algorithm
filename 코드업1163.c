#include <stdio.h>

int main(){
	int y,m,d;
	scanf("%d %d %d", &y, &m, &d);
	
	int num = ((y+m+d)/100)%10;
	
	if(num % 2 == 0)
		printf("대박");
	else
		printf("그럭저럭");
	
	return 0;
}
