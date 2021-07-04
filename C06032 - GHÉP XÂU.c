#include<stdio.h>
#include<string.h>

int kiemtra(char a[], char b[]){
	char s1[30];
	char s2[30];
	strcpy(s1, a);
	strcat(s1, b);
	strcpy(s2, b);
	strcat(s2, a);
	if(strcmp(s1, s2) > 0) return 1;
	return 0;
}

void inraketqua(){
	int n;
	scanf("%d", &n);
	char s[10][11];
	for(int i = 0; i < n; i++){
		scanf("%s", s[i]);
	}
	//	sap xep theo thu tu tu dien doi voi chu cai dau tien cua moi tu
	for(int i = 0; i < n; i++){
		for(int j = i + 1; j < n; j++){
			if(kiemtra(s[i], s[j])){                 					 
				char c[15];                
				strcpy(c, s[i]);
				strcpy(s[i], s[j]);
				strcpy(s[j], c);
			}
		}
	}
	// in ra la xong
	for(int i = 0; i < n; i++) printf("%s", s[i]);
	printf("\n");
}

int main(){
	int k;
	scanf("%d", &k);
	while(k--) inraketqua();
	return 0;
}
