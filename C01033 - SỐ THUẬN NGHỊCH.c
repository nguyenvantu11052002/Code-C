#include<stdio.h>
#include<string.h>

int main(){
	int k;
	scanf("%d", &k);
	while(k--){
		char s[100];
		scanf("%s", s);
		int count = 0;
		for(int i = 0; i < strlen(s); i++){
			if(s[i] != s[strlen(s) - 1 - i]){
				count++;
				break;
			}
		}
		if(count == 0) printf("YES");
		else printf("NO");
		printf("\n");
	}
	return 0;
}
