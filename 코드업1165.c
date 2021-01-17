#include <stdio.h>

int main(){
	int time, score;
	scanf("%d %d", &time, &score);
	
	int remainTime = 89-time;
	
	score += remainTime/5;
	
	printf("%d", score+1);
	return 0;
} 
