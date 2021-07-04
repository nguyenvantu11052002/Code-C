#include<stdio.h>
#include<string.h>

void inraketqua(){
	int k;
	scanf("%d\n", &k);
	while(k--){
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
		for(int i = 1; i < n; i++){
			res[i][0] -= 32;
			printf("%s", res[i]);
			if(i != n - 1) printf(" ");
		}
		printf(", ");
		for(int i = 0; i < strlen(res[0]); i++){
			res[0][i] -= 32;
		}
		printf("%s", res[0]);
		printf("\n");
   	}
}

int main(){
	inraketqua();
	return 0;
}
