#include<stdio.h>

void inraketqua(){
	int n;
	scanf("%d", &n);
	int x = 1;
	for(int i = 1; i <= n; i++){ // moi mot i la mot hang
		for(int j = 1; j <= n; j++){
			if(i == 1 || i == 2 || i == n){
				if(j <= x) printf("*");
			}
			else{
				if(j <= x){
				     	if(j == 1 || j == x) printf("*");
			        	else printf(".");	
				}
			}
		}
		x++;
		printf("\n");
	}
}

int main(){
	inraketqua();
	return 0;
}
