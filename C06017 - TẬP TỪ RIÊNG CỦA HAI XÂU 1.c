#include<stdio.h>
#include<string.h>

void inraketqua(){
	char s1[105];
	gets(s1);
	char s2[105];
	gets(s2);
	char *token1 = strtok(s1, " ");
	char res1[105][105];
	int n1 = 0;
	while(token1 != NULL){
		int kiemtra = 1;
		for(int i = 0; i < n1; i++){
			if(strcmp(res1[i], token1) == 0){
				kiemtra = 0;
				break;
			}
		}
		if(kiemtra == 1) strcpy(res1[n1++], token1);
		token1 = strtok(NULL, " ");
	}
	//sap xep xau s1 theo tu dien
	for(int i = 0; i < n1 - 1; i++){
		for(int j = i + 1; j < n1; j++){
			if(strcmp(res1[i], res1[j]) > 0){
				char c[105];
				strcpy(c, res1[i]);
				strcpy(res1[i], res1[j]);
				strcpy(res1[j], c);
			}
		}
	}
	char *token2 = strtok(s2, " ");
	int n2 = 0;
	char res2[105][105];
	while(token2 != NULL){
		int kiemtra1 = 1;
		for(int i = 0; i < n2; i++){
			if(strcmp(res2[i], token2) == 0){
				kiemtra1 = 0;
				break;
			}
		}
		if(kiemtra1 == 1) strcpy(res2[n2++], token2);
		token2 = strtok(NULL, " ");
	}
	for(int i = 0; i < n1; i++){
		int kiemtra2 = 1;
		for(int j = 0; j < n2; j++){
			if(strcmp(res1[i], res2[j]) == 0){
				kiemtra2 = 0;
				break;
			}
		}
		if(kiemtra2 == 1) printf("%s ", res1[i]);
	}
}

int main(){
	inraketqua();
	return 0;
}
