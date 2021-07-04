#include<stdio.h>
#include <string.h>

int main(){
    char s1[101], s2[100], b[101];
	fflush(stdin);
	gets(s1);
	fflush(stdin);
	gets(s2);
	const char s[2] = " ";
	char *token;
	token = strtok(s1,s);
	b[0]='\0';
	while(token != NULL){
		if(strcmp(s2,token)!=0){
			strcat(b,token);
			strcat(b," ");
		}
		token = strtok(NULL,s);
	}
	printf("%s", b);
	return 0;
}
