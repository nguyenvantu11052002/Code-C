#include<stdio.h>
#include<string.h>

void inraketqua(){
	char s[55];
	gets(s);
	for(int i = 0; i < strlen(s); i++){
		if(s[i] >= 'A' && s[i] <= 'Z') s[i] += 32;
	}
	char *token = strtok(s, " ");
	char res[100][100];
	int n = 0;
	while(token != NULL){
		strcpy(res[n++], token);
		token = strtok(NULL, " ");
	}
	for(int i = 0; i < n - 1; i++){
		printf("%c", res[i][0]);
	}
	printf("%s", res[n - 1]);
	printf("@ptit.edu.vn");
}

int main(){
	inraketqua();
	return 0;
}
