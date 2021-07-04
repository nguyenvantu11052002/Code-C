#include<stdio.h>
#include<string.h>

int main(){
	int k;
	scanf("%d\n", &k);
	while(k--){
		char s[1000];
		gets(s);
		int len = strlen(s);
		int count = 0;
		for(int i = 0; i < len; i++){
			if(s[0] != '8' || s[len -1] != '8'){
				count++;
			}
		}
		int sum = 0;
		for(int i = 0; i < len; i++){
			sum += s[i] - '0';
		}
		for(int i = 0; i < len; i++){
			if(sum % 10 != 0){
				count++;
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
	return 0;
}
