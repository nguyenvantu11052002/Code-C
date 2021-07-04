#include<stdio.h>
#include<string.h>

int catdoichuyenso(char x){
	if(x == '0' || x == '8' || x == '9') return 0;
	if(x == '1') return 1;
	return -2;
}

void inrasodacatdoi(){
		char s[100];
		scanf("%s", s);
		long long giatri = 0;
		for(int i = 0; i < strlen(s); i++){
			int x = catdoichuyenso(s[i]);
			if(x == -2){
				printf("INVALID");
				return;
			}
			else giatri = giatri*10 + x;
		}
		if(giatri == 0) printf("INVALID");
		else printf("%lld", giatri);
}

int main(){
	int k;
	scanf("%d", &k);
	while(k--){
		inrasodacatdoi();
		printf("\n");
	}
	return 0;
}
