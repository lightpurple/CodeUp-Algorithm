#include <stdio.h>

int main(){
	int h,m;
	scanf("%d %d", &h, &m);
	
	if(m>=30){
		printf("%d %d", h, m-30);
	}else{
		if(h == 0)
			printf("%d %d", 23, m+30);
		else
			printf("%d %d", h-1, m+30);
	}
	return 0;
} 
