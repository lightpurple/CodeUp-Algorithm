#include <stdio.h>

int main(){
	int ch;

	do{
		ch = getchar();
		printf("%c",ch);
	}while(ch != 'q');
	return 0;
}
