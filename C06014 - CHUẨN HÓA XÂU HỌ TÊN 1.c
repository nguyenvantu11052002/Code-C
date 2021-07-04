#include<stdio.h>
#include<string.h>
 
void inraketqua(){
	scanf("\n");
	char s[85];
	gets(s);
	for(int i = 0; i < strlen(s); i++){
		if(s[i] >= 'A' && s[i] <= 'Z') s[i] += 32;
	}
	char *token = strtok(s, " ");
	char res[85][85];
	int n = 0;
	while(token != NULL){
		strcpy(res[n++], token);
		token = strtok(NULL, " ");
	}
	for(int i = 0; i < n; i++){
		res[i][0] -= 32;
		printf("%s", res[i]);
		if(i != n - 1) printf(" ");
	}
}
 
int main(){
	int k;
	scanf("%d", &k);
	while(k--){
		inraketqua();
		printf("\n");
	}
	return 0;
}
