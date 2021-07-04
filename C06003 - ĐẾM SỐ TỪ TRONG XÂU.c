#include<stdio.h>
#include<string.h>

int main(){
	int k;
	scanf("%d\n", &k);
	while(k--){
		int count = 0;
		char s[1000];
		gets(s);
		char *token = strtok(s, " ");
		while(token != NULL){
			count++;
			token = strtok(NULL, " ");	
		}	
			printf("%d", count);
			printf("\n");
	}
    return 0;
}
