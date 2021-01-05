#include <stdio.h>

static int arr[201] = {0,}; 

void fibo(int n){
	if(n == 1 || n == 2)
		return;
	if(arr[n-1] == 0)
		fibo(n-1);
	arr[n] = (arr[n-1] + arr[n-2])%10009;
}

int main(){
	int N,i;
	
	arr[1] = 1;
	arr[2] = 1;
		
	scanf("%d", &N);
	
	fibo(N);
	
	printf("%d", arr[N]);
	return 0;
}
