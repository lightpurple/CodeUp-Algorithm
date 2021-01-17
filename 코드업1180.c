#include <stdio.h>

int main(){
	int n,tmp;
	scanf("%d", &n);
	tmp = n%10;
	n = (((n/10)+tmp*10)*2)%100;
	
	printf("%d\n", n); 
	if(n>50)
		printf("OH MY GOD");
	else
		printf("GOOD"); 
	
	return 0;
} 
