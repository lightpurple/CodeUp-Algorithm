#include <stdio.h>

int main(){
	double location;
	scanf("%lf", &location);
	
	if(location >= 50 && location <= 60)
		printf("win");
	else
		printf("lose");
	
	return 0;
}
