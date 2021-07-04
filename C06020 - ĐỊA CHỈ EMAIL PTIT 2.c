#include<stdio.h>
#include<string.h>

int main(){
	int k;
	scanf("%d", &k);
	char restong[55][55];
	int m = 0;
	while(k--){
		scanf("\n");
		char s[55];
		gets(s);
		for(int i = 0; i < strlen(s); i++){
			if(s[i] >= 'A' && s[i] <= 'Z') s[i] += 32;
		}
		char *token = strtok(s, " ");
		int n = 0;
		char res[55][55];
		while(token != NULL){
			strcpy(res[n++], token);
			token = strtok(NULL, " ");
		}
		char tentat[55]; //luu tru vinhnq o de bai de nhat nua so sanh giong khac nhau
		strcpy(tentat, res[n - 1]);
		for(int i = 0; i < n - 1; i++){
			strncat(tentat, res[i], 1);
		}
		int count = 1;
		for(int i = 0; i < m; i++){
			if(strcmp(tentat, restong[i]) == 0) count++;
		}
		strcpy(restong[m++], tentat);
		if(count == 1) printf("%s", tentat);
		else printf("%s%d", tentat, count);
		printf("@ptit.edu.vn\n");
	}
	return 0;
}
