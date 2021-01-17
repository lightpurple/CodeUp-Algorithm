#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	int a = n%10;
	
	switch(a){
		case 1:
			if(n == 11)
				printf("%dth", n);
			else 
				printf("%dst", n);
			break;
		case 2:
			if(n == 12)
				printf("%dth", n);
			else 
				printf("%dnd", n);
			break;
		case 3:
			if(n == 13)
				printf("%dth", n);
			else 
				printf("%drd", n);
			break;
		default:
			printf("%dth", n);
	}
	return 0;
}
