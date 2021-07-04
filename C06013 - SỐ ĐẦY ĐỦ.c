#include<stdio.h>
#include<string.h>

void inraketqua(){
	scanf("\n");
	char s[1005];
	gets(s);
	char res[1005] = {0};
	for(int i = 0; i < strlen(s); i++){
		if(s[0] == '0' || s[i] < '0' || s[i] > '9'){ // sau buoc nay xau s toan la cac so va khong co ki tu khac
			printf("INVALID\n");
			return;
		}
		res[i] = s[i] - '0';
	}
	int countdemdu10sotu0den9 = 0;
	for(int i = 0; i < 1005; i++){
		int count = 0;
		for(int j = i - 1; j >= 0; j--){
			if(res[i] == res[j]) count++;
		}
		if(count == 0) countdemdu10sotu0den9++;
	}
	if(countdemdu10sotu0den9 == 10) printf("YES\n");
	if(countdemdu10sotu0den9 < 10) printf("NO\n");	
}

int main(){
	int k;
	scanf("%d", &k);
	while(k--){
		inraketqua();
	}
	return 0;
}
