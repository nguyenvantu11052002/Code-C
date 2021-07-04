#include<stdio.h>
#include<string.h>

void inraketqua(){
	char s[25];
	gets(s);
	int len = strlen(s);
	if(len % 2 == 0){
		int count = 0;
    	for(int i = 0; i < len/2; i++){
	    	if(s[i] != s[len - 1 - i]) count++;
    	}
    	if(count == 1) printf("YES");
    	else printf("NO");
    }
    else{
    	int count = 0;
    	for(int i = 0; i < len/2; i++){
    		if(s[i] != s[len - 1 - i]) count++; // abcba
		}
		if(count <= 1) printf("YES");
		else printf("NO");
	}
}

int main(){
	int k;
	scanf("%d\n", &k);
	while(k--){
		inraketqua();
		printf("\n");
	}
	return 0;
}
