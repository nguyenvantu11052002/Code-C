#include<stdio.h>
#include<math.h>
#include<string.h>

int snt(long long n){
	if(n < 2) return 0;
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0) return 0;
	}
	return 1;
}

void inrasntvasolanxh(){
	char s[20];
	scanf("%s", s);
	long long b[100] = {0};
	for(int i = 0; i < strlen(s); i++){
		if(snt(s[i] - '0')) b[s[i] - '0']++;
	}
	for(int i = 0; i < strlen(s); i++){
		if(snt(s[i] - '0') && b[s[i] - '0'] > 0){
			printf("%c %d\n", s[i], b[s[i] - '0']);
			b[s[i] - '0'] = 0;
		} 
	}
}

int main(){
	inrasntvasolanxh();
	return 0;
}
