#include<stdio.h>

void inraketqua(){
	int n;
	scanf("%d", &n);
	int x = 2*n - 1;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= x; j++){
			if(j > x - n) printf("*");
			else printf("~");
		}
		x--;
		printf("\n");
	}
}

int main(){
	inraketqua();
	return 0;
}
