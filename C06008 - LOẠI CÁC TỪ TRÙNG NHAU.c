#include<stdio.h>
#include<string.h>

int main(){
	char s[1000];
	gets(s);
	char res[1000][1000];
	char *token = strtok(s, " ");
	int n = 0;
	while(token != NULL){
		int kiemtra = 1;
		for(int i = 0; i < n; i++){
		    if(strcmp(token,res[i]) == 0){
			    kiemtra = 0;
			    break;
		    }
	    } 
		if(kiemtra == 1){
			strcpy(res[n], token);
			n++;
		}
		token = strtok(NULL, " ");	
    }
    for(int i = 0; i < n; i++){
    	printf("%s ", res[i]);
	}
	return 0;
}
