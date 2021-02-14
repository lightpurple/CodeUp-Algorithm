#include <stdio.h>

int n, d[110];

int f(){
	int i,max=0,num=0;
	for(i=0; i<sizeof(d)/sizeof(int); i++)
		if(d[i] > max){
			max=d[i];
			num = i;
		}
	return num+1;
}

int main(){
	scanf("%d", &n);
	int i;
	for(i=0; i<n; i++)
		scanf("%d", &d[i]);

	printf("%d", f());
	return 0;
}
