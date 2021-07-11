#include<stdio.h>
#include<string.h>

int kiemtratrungnhauvaluuvaores(char res[1005][1005], char s[1005], int n){
	for(int i = 0; i < n; i++){
		if(strcmp(res[i], s) == 0) return i;
	}
	return -1;
}

int max(int a, int b){
	if(a > b) return a;
	return b;
}

void inraketqua(){
	char s[1005]; // cho no bang do dai cua 1 dong mang 2 chieu luu tru
	char res[1005][1005];
	int Maxlen = 0;
	int n = 0;
	int b[1005] = {0}; // mang dem
	while(scanf("%s", s) != -1){
		Maxlen = max(Maxlen, strlen(s));
	    int vt = kiemtratrungnhauvaluuvaores(res, s, n);
	    if(vt == -1){
	    	b[n] = 1;
	    	strcpy(res[n++], s);
		}
		else b[vt]++;
	}
	for(int i = 0; i < n; i++){
		if(strlen(res[i]) == Maxlen) printf("%s %d %d\n", res[i], Maxlen, b[i]);
	}
}

int main(){
	inraketqua();
	return 0;
}
