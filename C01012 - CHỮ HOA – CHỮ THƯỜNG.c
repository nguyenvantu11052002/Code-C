#include<stdio.h>

int main(){
	int k;
	scanf("%d", &k);
    while(k--){
    	getchar();
    	char c;
    	scanf("%c", &c);
    	if(c >= 'A' && c <= 'Z'){
    		printf("%c", c + 32);
		}
		if(c >= 'a' && c <= 'z'){
			printf("%c", c - 32);
		}
		printf("\n");
	}
    return 0;
}
