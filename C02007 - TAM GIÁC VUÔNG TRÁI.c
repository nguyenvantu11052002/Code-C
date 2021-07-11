#include<stdio.h>

void inraketqua(){
	int n;
	scanf("%d", &n);
	int x = 1;
	for(int i = 1; i <= n; i++){ // moi mot i la mot hang
		for(int j = 1; j <= n; j++){
			if(j <= x) printf("*");
		}
		x++;
		printf("\n");
	}
}

int main(){
	inraketqua();
	return 0;
}
