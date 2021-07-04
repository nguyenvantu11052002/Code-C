#include<stdio.h>
#include<string.h>

int main(){
	int k;
	scanf("%d\n", &k);
	while(k--){
		char s1[205];
		gets(s1);
		char s2[205];
		gets(s2);
		char res1[205][205];
		int n1 = 0;
		char res2[205][205];
		int n2 = 0;
		char *token1 = strtok(s1, " ");
		// loai bo cac tu trung nhau cua s1 va luu vao res1, res1 bao gom cac tu khac nhau
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
		// sap xep cac tu trong res1 theo thu tu tu dien
		for(int i = 0; i < n1 - 1; i++){
			for(int j = i + 1; j < n1; j++){
				if(strcmp(res1[i], res1[j]) > 0){
					char c[205];
					strcpy(c, res1[i]);
					strcpy(res1[i], res1[j]);
					strcpy(res1[j], c);
				}
			}
		}
		// loai bo cac tu trung nhau cua s2 va luu vao res2, res2 bao gom cac tu khac nhau
		char *token2 = strtok(s2, " ");
		while(token2 != NULL){
			int kiemtra = 1;
			for(int i = 0; i < n2; i++){
				if(strcmp(res2[i], token2) == 0){
					kiemtra = 0;
					break;
				}
			}
			if(kiemtra == 1) strcpy(res2[n2++], token2);
			token2 = strtok(NULL, " ");
		}
		for(int i = 0; i < n1; i++){
			int kiemtra = 1;
			for(int j = 0; j < n2; j++){
				if(strcmp(res1[i], res2[j]) == 0){
					kiemtra = 0;
					break;
				}
			}
			if(kiemtra == 1) printf("%s ", res1[i]);
		}
		printf("\n");
	}
	return 0;
}
