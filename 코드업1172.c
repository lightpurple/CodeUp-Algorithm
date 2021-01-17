#include <stdio.h>

int main(){
	int i,j,arr[3];
	for(i=0; i<3; i++)
		scanf("%d", &arr[i]);
		
	for(i=0; i<2; i++)
		for(j=i+1; j<=2; j++){
			if(arr[i]>arr[j]){
				int tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
			}
		}
	
	for(i=0; i<3; i++)
		printf("%d ", arr[i]);
	
	return 0;
}
