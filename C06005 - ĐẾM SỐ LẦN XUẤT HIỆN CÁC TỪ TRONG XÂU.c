#include<stdio.h>
#include<string.h>

int dem(char res[100][100], char s[100], int n){
	for(int i = 0; i < n; i++){
		if(strcmp(res[i], s) == 0){
			return i;
		}
	}
	return -1;
}
int main(){
	char res[100][100];
	char s[100];
	int b[100] = {0};
	int n = 0;
	while(scanf("%s", s) != -1){
		for(int i = 0; i < strlen(s); i++){
			if(s[i] >= 'A' && s[i] <= 'Z'){
				s[i] += 32;
			}
		}
		int hambentren = dem(res, s, n);
		if(hambentren == -1){
			strcpy(res[n], s);
			b[n] = 1;
			n++;
		}
		else{
			b[hambentren]++;
		}
	}
	for(int i = 0; i < n; i++){
		printf("%s %d\n", res[i], b[i]);
	}
	return 0;
}
