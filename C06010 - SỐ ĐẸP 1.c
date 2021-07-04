#include<stdio.h>
#include<string.h>

int main(){
	int k;
	scanf("%d\n", &k);
	while(k--){
		char s[1000];
		gets(s);
		int count = 0;
		int len = strlen(s);
		for(int i = 0; i < len; i++){
			if(s[i] % 2 != 0){
				count++;
				break;
			}
			if(s[i] != s[len - 1 -i]){
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
