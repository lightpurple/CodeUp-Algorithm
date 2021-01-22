#include <stdio.h>

int main(){
	char ch;

	do{
		ch = getchar();
		printf("%c",ch);
	}while(ch != 'q');
	return 0;
}
