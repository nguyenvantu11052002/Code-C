#include<stdio.h>
#include<string.h>

void inraketqua(){
	char s[105];
	scanf("%s", s);
	int len = strlen(s);
	int a[105];
	for(int i = 0; i < len; i++){
		if(s[i] == 'I') a[i] = 1;
		if(s[i] == 'V') a[i] = 5;
		if(s[i] == 'X') a[i] = 10;
		if(s[i] == 'L') a[i] = 50;
		if(s[i] == 'C') a[i] = 100;
		if(s[i] == 'D') a[i] = 500;
		if(s[i] == 'M') a[i] = 1000;
	}
	int sum = a[len - 1];
	for(int i = len - 1; i >= 1; i--){
		if(a[i - 1] < a[i]) sum -= a[i - 1];
		else sum += a[i - 1];     // XIX
	}
	printf("%d\n", sum);
}

int main(){
	int k;
	scanf("%d", &k);
	while(k--){
		inraketqua();
	}
	return 0;
}
