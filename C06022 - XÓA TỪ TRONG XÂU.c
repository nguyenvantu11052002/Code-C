#include<stdio.h>
#include<string.h>

int haitukhacnhau(char s1[], char s2[]){ //s1 o day la de ti nua su dung cho tung tu trong s1 so sanh voi s2
	char a[205];
	char b[25];
	strcpy(a, s1);
	strcpy(b, s2);
	for(int i = 0; i < strlen(a); i++){
		if(a[i] >= 'A' && a[i] <= 'Z') a[i] += 32;
	}
	for(int i = 0; i < strlen(b); i++){
		if(b[i] >= 'A' && b[i] <= 'Z') b[i] += 32;
	}
	if(strcmp(a, b) == 0) return 0;
	return 1;
}

void inraketqua(int t){
	char s1[205];
	gets(s1);
	char s2[25];
	gets(s2);
	char *token = strtok(s1, " ");
	char res[205][205];
	int n = 0;
	printf("Test %d: ", t);
	while(token != NULL){
		strcpy(res[n++], token);
		token = strtok(NULL, " ");
	}
	for(int i = 0; i < n; i++){
		if(haitukhacnhau(res[i], s2)) printf("%s ", res[i]);
	}
}

int main(){
	int T;
	scanf("%d\n", &T);
	for(int t = 1; t <= T; t++){
		inraketqua(t);
		printf("\n");
	}
	return 0;
}
