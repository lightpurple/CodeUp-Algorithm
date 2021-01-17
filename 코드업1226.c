#include <stdio.h>

int main(){
	int i,lotto[7],juhee[6];
	for(i=0; i<7; i++)
		scanf("%d", &lotto[i]);
	for(i=0; i<6; i++)
		scanf("%d", &juhee[i]);
	int j,count=0;
	
	for(i=0; i<6; i++){
		for(j=0; j<6; j++){
			if(juhee[j] == lotto[i])
				count++;
		}
	}
	int bonus=0;
	switch(count){
		case 6:
			printf("1");
			break; 
		case 5:
			for(i=0; i<6; i++)
				if(juhee[i] == lotto[6]){
					printf("2");
					bonus++;
					break;
				}
			if(bonus == 0)
				printf("3");
			break;
		case 4:
			printf("4");
			break;
		case 3:
			printf("5");
			break;
		default:
			printf("0");	
	}
	
	return 0;
}
