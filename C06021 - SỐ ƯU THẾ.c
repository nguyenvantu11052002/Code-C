#include<stdio.h>
#include<string.h>

int kiemtrasouuthechanle(int res[], int len){ // neu thay len = 1005 thi doan sau mang res toan so 0 nen countchan > 500
	int countchan = 0;
	int countle = 0;
	for(int i = 0; i < len; i++){
		if(res[i] % 2 == 0) countchan++;
		else countle++;
	}
	if(countchan > countle) return 2;
	if(countchan < countle) return 1;
}

void inraketqua(){
	scanf("\n");
	char s[1005];
	gets(s);
	int len = strlen(s); // len de kiemtra so chu so la chan hay le . % 2 == or != 0
	int res[1005] = {0};
	for(int i = 0; i < len; i++){
		if(s[0] == '0' || s[i] < '0' || s[i] > '9'){
			printf("INVALID\n");
			return;
		}
		res[i] = s[i] - '0';
	}
	if((len % 2 == 0 && kiemtrasouuthechanle(res, len) == 2) || (len % 2 != 0 && kiemtrasouuthechanle(res, len) == 1)) printf("YES\n");
	else printf("NO\n");
}

int main(){
	int k;
	scanf("%d", &k);
	while(k--){
		inraketqua();
	}
	return 0;
}
