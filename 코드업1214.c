#include <stdio.h>

int main(){
	int y,m;
	scanf("%d %d", &y, &m);
	
	if(y%4==0 && y%100!=0 || y%400==0){
		switch(m){
			case 2:
				printf("29");
				break;
			default:
				if(m==4 || m==6 || m==9 || m==11)
					printf("30");
				else
					printf("31");
		}
	}else{
		switch(m){
			case 2:
				printf("28");
				break;
			default:
				if(m==4 || m==6 || m==9 || m==11)
					printf("30");
				else
					printf("31");
		}
	}
	
	return 0;
}
