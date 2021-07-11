#include<stdio.h>
#include<string.h>

int tuthuannghich(char s[]){
	int len = strlen(s);
	for(int i = 0; i < len/2; i++){
		if(s[i] != s[len - 1 - i]) return 0;
	}
	return 1;
}

int max(int a, int b){
	if(a >= b) return a;
	if(a < b) return b;
}

int main(){
	char s[1000];
	char res[1000][1000];
	int b[1000] = {0};
	int n = 0;
	int Maxlen = 0;
	while(scanf("%s", s) != -1){
		if(tuthuannghich(s)){
			int xh = -1;
			Maxlen = max(Maxlen, strlen(s));
			for(int i = 0; i < n; i++){
				if(strcmp(res[i], s) == 0){
					xh = i;
					break;
				}
	     	}
	     	if(xh == -1){
			   	b[n] = 1;
			    strcpy(res[n++], s);
		    }
		   	else b[xh]++; 
	    }
	}
	for(int i = 0; i < n; i++){
		if(strlen(res[i]) == Maxlen) printf("%s %d\n", res[i], b[i]);
	}
	return 0;
}
