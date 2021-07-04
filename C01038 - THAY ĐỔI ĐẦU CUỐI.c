#include<stdio.h>
#include<string.h>

int main(){
	char s[100];
	gets(s);
	int len = strlen(s);
	char c = s[0];
	s[0] = s[len - 1];
	s[len - 1] = c;
	if(s[0] == '0'){
		for(int i = 1; i < len; i++){
			printf("%c", s[i]);
		}
	}
	else printf("%s", s);
	return 0;
}
