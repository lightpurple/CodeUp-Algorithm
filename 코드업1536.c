#include <stdio.h>

int n;

long long int d[110];

long long f(){
	long long i,min=1000000000;
	for(i=1; i<=n; i++)
		if(d[i] < min){
			min = d[i];
		}
	return min;
}

int main(){
	scanf("%d", &n);
	int i;
	for(i=1; i<=n; i++)
		scanf("%lld", &d[i]);

	printf("%lld", f());
	return 0;
}
