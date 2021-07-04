#include<stdio.h>
#include<string.h>

void inraloaibo084(){
	char s[20];
	scanf("%s", s);
	for(int i = 0; i < strlen(s); i++){
		if(s[i] == '0' && s[i+1] == '8' && s[i+2] == '4') i += 2;
		else printf("%c", s[i]);
	}
}

int main(){
	int k;
	scanf("%d", &k);
	while(k--){
		inraloaibo084();
		printf("\n");
	}
	return 0;
}
