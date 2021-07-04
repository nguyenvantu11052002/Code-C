#include<stdio.h>
#include<string.h>

int max(int a, int b){
	if(a < b) return b;
	return a;
}

void inraketqua(){
	char s[55];
	gets(s);
	int a[55];
	int f[55];
	int count = 1;
	for(int i = 0; i < strlen(s); i++){
		a[i] = s[i] - 'a';
	}
	for(int i = 0; i < strlen(s); i++){
		f[i] = 0;
		for(int j = i - 1; j >= 0; j--){
			if(a[i] > a[j]) f[i] = max(f[i], f[j]);
		}
		f[i] += 1; // +1 la vi tri cua no 
		count = max(count, f[i]);
	}
	printf("%d", 26 - count);
}

int main(){
	inraketqua();
	return 0;
}
