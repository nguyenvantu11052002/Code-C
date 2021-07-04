#include<stdio.h>
#include<string.h>

int main(){
	char s[1000];
	gets(s);
	char res[1000][1000];
	char *token = strtok(s, " ");
	while(token != NULL){
		printf("%s\n", token);
		token = strtok(NULL, " ");
	}
	return 0;
}
