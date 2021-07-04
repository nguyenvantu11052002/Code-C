#include<stdio.h>
#include<string.h>
#include<math.h>

int songuyento(int n){
	if(n < 2){
		return 0;
	}
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0){
			return 0;
		}
	}
	return 1;
}
int main(){
	int k;
	scanf("%d\n", &k);
	while(k--){
		char s[1000];
		gets(s);
		int len = strlen(s);
		int count = 0;
		for(int i = 0; i < len; i++){
			if(s[i] != s[len - 1 - i]){
				count++;
				break;
			}
		}
		for(int i = 0; i < len; i++){
			if(songuyento(s[i] - '0') == 0 ){
				count++;
				break;
			}
		}
		if(count == 0){
			printf("YES");
		}
		else{
			printf("NO");
		}
		printf("\n");
	}
}
